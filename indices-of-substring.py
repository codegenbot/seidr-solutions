def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(i)
    return indices