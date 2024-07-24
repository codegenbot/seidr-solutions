def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if target == '' or (target and text[i:i + len(target)] == target)
    ]

    return indices

print(indices_of_substring())