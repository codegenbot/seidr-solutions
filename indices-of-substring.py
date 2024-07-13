def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(str(pos))
            i = pos + 1
        else:
            break
    return [int(x) for x in indices]