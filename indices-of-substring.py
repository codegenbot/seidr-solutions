def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i: i + len(target)] == target or target == "" or (i > 0 and text[i - 1] == target[0])
    ]

    for idx in indices:
        print(idx)


indices_of_substring()