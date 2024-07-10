def indices_of_substring(text):
    start = 0
    indices = []
    while True:
        pos = text.find("target", start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices