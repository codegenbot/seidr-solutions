def intersperse(a, b):
    if not a:
        return [b]
    result = [a[0]]
    for i in range(len(a) - 1):
        result.append(b)
        result.append(a[i + 1])
    result.append(b)
    return result