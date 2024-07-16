def indices_of_substring():
    text = input()
    target = input()
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    for index in indices:
        print(index, end=" ")

indices_of_substring()