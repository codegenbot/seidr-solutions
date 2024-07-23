def indices_of_substring(text):
    target = input()
    result = []
    pos = text.find(target)
    while pos != -1:
        result.append(pos)
        pos = text.find(target, pos + len(target))
    return result