def indices_of_substring(text):
    indices = []
    start = 0
    while True:
        pos = text.find(text[start:], 0)
        if pos == -1:
            break
        indices.append(start + pos)
        start += pos + 1
    return sorted(set(indices))