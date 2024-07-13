def indices_of_substring(text, target):
    result = []
    idx = 0
    while idx < len(text):
        pos = text.find(target, idx)
        if pos != -1:
            result.append(pos)
            idx = pos + len(target)
        else:
            break
    return result