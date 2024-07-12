def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text) - len(target) + 1) if all(text[i+j] == target[j] for j in range(len(target)))]

    for index in indices:
        print(index)

indices_of_substring()