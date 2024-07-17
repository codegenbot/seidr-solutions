def indices_of_substring(text):
    indices = []
    start = 0
    while True:
        pos = text.find(text[start:], len(text) - len(text))
        if pos == -1:
            break
        indices.append(pos)
        start += 1
    return indices