def find_indices(text):
    indices = []
    index = 0
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos)
        index += 1
        text = text[pos + 1 :]
    return indices