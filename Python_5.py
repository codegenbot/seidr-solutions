def intersperse(a, b):
    if not a:
        return [b]
    result = [b]
    for item in a:
        result.extend([item, b])
    if not result[-1] == b:
        result.append(b)
    return result