def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [i for i in range(1, len(text) + 1) if text[i - len(target):i] == target]
    for idx in indices:
        print(idx - len(target))


indices_of_substring()