def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if any(text[i:i+len(target)] == target[j:j+len(target)] for j in range(len(target)))
    ]

    print(indices)

indices_of_substring()