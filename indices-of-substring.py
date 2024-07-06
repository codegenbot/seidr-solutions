def indices_of_substring(text, target):
    result = []
    while True:
        idx = text.index(target)
        if idx == -1:
            break
        result.append(idx)
        text = text[idx + len(target) :]
    return result