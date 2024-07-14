def indices_of_substring(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices