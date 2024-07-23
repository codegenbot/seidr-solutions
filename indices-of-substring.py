def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [i for i in range(len(text)) if text.startswith(target, i) or text[i:].startswith(target)]
    for idx in indices:
        print(idx)


indices_of_substring()