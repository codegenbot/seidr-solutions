def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text) - len(target) + 2)
        if text[i:i + len(target)] == target or len(target) == 0
    ]

    for index in indices:
        print(index)

indices_of_substring()