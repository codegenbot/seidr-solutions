def get_indices(text, target):
    indices = []
    for i, _ in enumerate(text):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices