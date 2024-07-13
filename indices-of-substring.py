def indices_of_substring(text):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target_string, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices