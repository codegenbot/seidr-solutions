def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []

    start = 0
    while True:
        idx = text.find(target, start)
        if idx == -1:
            break
        indices.append(idx)
        start = idx + 1

    for idx in indices:
        print(idx)


indices_of_substring()