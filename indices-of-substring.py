def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target and not (i > 0 and text[i-1] == target[0]):
            indices.append(i)
    return indices