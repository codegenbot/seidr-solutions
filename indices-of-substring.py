def indices_of_substring(text, target):
    result = []
    idx = text.find(target)
    while idx != -1:
        result.append(idx)
        idx = text.find(target, idx + 1)
    return result