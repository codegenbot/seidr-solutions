def get_indices(text, target):
    indices = []
    start = 0
    while True:
        index = text[start:].find(target)
        if index == -1:
            break
        indices.append(index + start)
        start += index + len(target)
    return indices