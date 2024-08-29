def indices_of_substring(text):
    target = input()
    result = []
    start_idx = 0
    while True:
        idx = text.find(target, start_idx)
        if idx == -1:
            break
        result.append(idx)
        start_idx = idx + 1
    return result