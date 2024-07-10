def intersperse(a, b):
    if not a:
        return [b]
    result = [b]
    for item in a:
        result.append(item)
        result.append(b)
    result.append(b)
    return result