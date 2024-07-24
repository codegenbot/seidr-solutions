def indices_of_substring():
    text = input()
    target = input()
    indices = []
    i = 0
    while i < len(text):
        if text.startswith(target, i):
            indices.append(i)
            i += 1
        else:
            i += 1
    for index in indices:
        print(index)


indices_of_substring()