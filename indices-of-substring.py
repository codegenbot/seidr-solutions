def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if len(target) > 0 and (len(text) >= len(target) and i + len(target) <= len(text) and text[i:i + len(target)] == target)
    ]

    for index in indices:
        print(index)

indices_of_substring()