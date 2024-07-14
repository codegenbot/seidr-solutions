def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos += 1
        if text.find(target, pos) != -1:
            result.append(text.find(target, pos))
        else:
            break
    return result