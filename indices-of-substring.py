def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target) if start == 0 else text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + len(target)
        else:
            break
    return result