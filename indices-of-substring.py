def indices_of_substring(text, target):
    result = []
    offset = 0
    while offset < len(text):
        pos = text.find(target, offset)
        if pos != -1:
            result.append(pos + 1)
            offset = pos + 1
        else:
            break
    return result