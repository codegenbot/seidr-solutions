def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i : i + len(target)] == target
        or (
            i + len(target) <= len(text) and text[i + 1 : i + len(target) + 1] == target
        )
    ]

    print(indices)


indices_of_substring()