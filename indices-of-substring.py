def indices_of_substring(text, target):
    indices = []
    for i in range(len(target)):
        if text[i : i + len(target)] == target and (
            i == 0 or i >= indices[-1] + len(target)
        ):
            indices.append(i)
    return indices