def indices_of_substring():
    text = input()
    target = input()
    indices = [
        i for i in range(len(text) - len(target) + 1) if text.startswith(target, i)
    ]
    print(*indices)


indices_of_substring()