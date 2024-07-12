def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text) - len(target) + 1) if all((text[i+j] == target[j] for j in range(len(target))) and ((i == 0 or not text[i-1].isalnum()) and ((i + len(target) == len(text)) or not text[i+len(target)].isalnum()))]

    for index in indices:
        print(index)

indices_of_substring()