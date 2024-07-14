def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos != -1 and pos < len(text) - len(target):
            result.append(pos)
            pos += len(target)
        else:
            break
    return result