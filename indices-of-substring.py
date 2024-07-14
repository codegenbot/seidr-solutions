def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        if pos == -1:
            break
        pos += len(target)
        result.append(pos - len(target))