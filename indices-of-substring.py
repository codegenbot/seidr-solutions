def indices_of_substring():
    text = input()
    target = input()

    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)

    for idx in indices:
        print(idx)


indices_of_substring()