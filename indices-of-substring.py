def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text) - len(target) + 1:
        if text[start : start + len(target)] == target:
            result.append(str(start))
            start += len(target)
        else:
            start += 1
    return [int(x) for x in result]