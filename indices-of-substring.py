def indices_of_substring():
    text = input()
    target = input()
    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text.startswith(target, i) or (i > 0 and text.startswith(target, i - 1))
    ]
    for idx in indices:
        print(idx)


indices_of_substring()