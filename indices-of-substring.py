def get_indices(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices