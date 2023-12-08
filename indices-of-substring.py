
def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].find(target) != -1:
            indices.append(i)
    return indices