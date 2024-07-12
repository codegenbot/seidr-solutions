def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = []
    if not text or not target:
        return indices

    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)

    return indices


print(*indices_of_substring())