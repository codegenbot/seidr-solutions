def indices_of_substring():
    text = input().strip()
    target = input().strip()

    if len(target) == 0:
        return [0]

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if (len(target) == 0) or (text[i : i + len(target)] == target)
    ]

    return indices


print(indices_of_substring())