def get_indices(text, target):
    if not target:
        return []
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices