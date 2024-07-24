def indices_of_substring():
    text = input().strip()
    target = input().strip()

    if len(target) == 0:
        return list(range(len(text) + 1))

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i: i + len(target)] == target or len(target) == 1 and text[i] == target
    ]

    return indices


print(indices_of_substring())