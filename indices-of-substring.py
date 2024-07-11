def indices_of_substring():
    text = input().strip()
    target = input().strip().lower()

    indices = [i for i, _ in enumerate(text.lower()) if text[i:i + len(target)].lower() == target]

    for index in indices:
        print(index)

indices_of_substring()