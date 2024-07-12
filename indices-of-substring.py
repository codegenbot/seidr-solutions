def indices_of_substring():
    text = input().strip()
    target = input().strip()

    if not text or not target:
        return

    indices = [i for i in range(len(text)) if text.startswith(target, i)]

    for idx in indices:
        print(idx)


indices_of_substring()