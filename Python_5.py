def intersperse(a, b):
    if not a:
        return [b]
    result = [b] + a
    for i in range(1, len(result)):
        result.insert(i, b)
    return result