def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if all(text[i + j].lower() == target[j] for j in range(len(target)))
    ]

    for index in indices:
        print(index)

indices_of_substring()