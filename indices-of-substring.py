def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
        elif text[i-1:i+len(target)-1] == target:
            indices.append(i-1)
    return indices