def indices_of_substring(text, target):
    result = []
    pos = text.find(target)
    while pos != -1:
        result.append(pos)
        pos = text.find(target, pos + 1)
    return result