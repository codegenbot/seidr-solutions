def indices_of_substring():
    text = input().strip()
    target = input().strip()

    if len(target) == 0:
        return list(range(len(text) + 1))

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if any(text[i + j] != target[j] for j in range(len(target)))
    ]

    return indices


print(indices_of_substring())