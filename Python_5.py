def intersperse(a, b):
    if not a:
        return [b]
    result = [b]
    for item in a:
        result += [b, item]
    result.append(b)
    return result