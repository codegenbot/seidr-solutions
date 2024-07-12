def indices_of_substring():
    text = input()
    target = input()

    indices = []
    start = 0
    while True:
        start = text.find(target, start)
        if start == -1:
            break
        indices.append(start)
        start += 1

    for index in indices:
        print(index, end=" ")


indices_of_substring()