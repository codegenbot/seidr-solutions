def indices_of_substring(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos != -1:
            indices.append(str(pos))
            start = pos + 1
        else:
            break
    return [int(x) for x in indices]