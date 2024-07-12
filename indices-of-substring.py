def indices_of_substring():
    text = input()
    target = input()

    indices = []
    i = 0
    while i < len(text):
        if text.startswith(target, i):
            indices.append(i)
            i += 1
        i += 1

    for idx in indices:
        print(idx)


indices_of_substring()