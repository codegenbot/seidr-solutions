def indices_of_substring(text, target):
    window_size = min(len(text), len(target))
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
    return indices