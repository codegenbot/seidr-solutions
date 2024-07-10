def indices_of_substring(text):
    indices = []
    start = 0
    while True:
        pos = text.find(text[start:], start)
        if pos == -1:
            break
        if start == 0:
            indices.append(0)
        else:
            indices.append(start + pos)
        start += pos + 1
    return sorted(set(indices))