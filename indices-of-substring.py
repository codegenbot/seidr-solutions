def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos) + len(target)
        if pos != -1:
            result.append(pos)
        else:
            break
    return result