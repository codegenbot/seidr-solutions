def indices_of_substring(text):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(text[start:], 0)
        if pos != -1:
            indices.append(start + pos)
            start += pos + 1
        else:
            break
    return sorted(list(set(indices)))