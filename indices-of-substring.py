def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i, _ in enumerate(text) if text[i:i + len(target)] == target]

    for idx in indices:
        print(idx)


indices_of_substring()