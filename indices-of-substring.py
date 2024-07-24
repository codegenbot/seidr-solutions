def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target or (i+1 < len(text) and text.find(target, i+1) == i+1)]

    for index in indices:
        print(index)

indices_of_substring()