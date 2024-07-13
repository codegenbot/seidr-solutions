def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target] + ([len(text) - len(target)] if text.endswith(target) else [])

    print(indices)

indices_of_substring()