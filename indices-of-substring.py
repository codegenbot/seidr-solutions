def indices_of_substring():
    text = input().strip()
    target = input().strip()

    if len(target) == 0:
        return list(range(len(text) + 1))

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if target in text[i:i + max(1, len(target))] or target == ''
    ]

    return indices

print(indices_of_substring())