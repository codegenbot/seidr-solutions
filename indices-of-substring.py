def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i:i + len(target)] == target
        or (len(target) > 1 and text[i:i + len(target) - 1] == target[:-1])
    ]

    if not indices and (text == target or text.endswith(target[:-1])):
        indices = [0]

    print(indices)

indices_of_substring()