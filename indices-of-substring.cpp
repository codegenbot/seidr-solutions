def get_indices(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            indices.append(i)
        i += 1
    return indices