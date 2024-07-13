def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    i = 0
    while i < len(text):
        if text[i:i + len(target)] == target:
            indices.append(i)
        i += 1

    print(indices)

indices_of_substring()