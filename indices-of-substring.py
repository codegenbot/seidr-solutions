def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        idx = text.find(target, start)
        if idx == -1:
            break
        indices.append(idx)
        start = idx + 1
    return indices