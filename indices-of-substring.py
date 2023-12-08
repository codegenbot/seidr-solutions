def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].find(target) != -1 or text[:i+1].find(target) != -1:
            indices.append(i + len(target))
    return indices