def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    start = 0
    while start < len(text):
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1

    for i in indices:
        print(i, end=" ")


indices_of_substring()