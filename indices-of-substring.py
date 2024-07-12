def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text))
        if text.startswith(target, i)
    ]

    print(indices)

indices_of_substring()