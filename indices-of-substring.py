def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i : i + len(target)] == target
    ]

    print(len(indices))
    print(" ".join(map(str, indices)))


indices_of_substring()