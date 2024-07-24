def indices_of_substring():
    text = input()
    target = input()
    indices = []

    if not text or not target:
        return indices

    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)

    return indices


print(*indices_of_substring())