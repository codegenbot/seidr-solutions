def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if target == '' or text[i:i + len(target)] == target or text[i] == target[0]
    ]

    return indices

print(indices_of_substring())