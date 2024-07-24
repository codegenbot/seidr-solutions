def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)

    for index in indices:
        print(index, end=" ")


indices_of_substring()