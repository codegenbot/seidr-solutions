def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text))
        if text[i:i + len(target)].lower() == target.lower()
    ]

    print(indices)

indices_of_substring()