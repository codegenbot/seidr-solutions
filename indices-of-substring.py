def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i:].startswith(target):
            indices.append(i)

    for idx in indices:
        print(idx, end=" ")


indices_of_substring()