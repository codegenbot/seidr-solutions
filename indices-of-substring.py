def indices_of_substring(text, target):
    result = []
    if text.startswith(target):
        result.append(0)
    start = len(target) if text.startswith(target) else 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result