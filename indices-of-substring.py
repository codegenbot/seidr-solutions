def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    start = 0
    while True:
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1

    for index in indices:
        print(index)

indices_of_substring()