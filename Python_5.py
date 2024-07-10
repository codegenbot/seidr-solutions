def intersperse(a, b):
    if not a:
        return [b]
    result = [b] + a
    for i in range(len(result) - 1):
        result.insert(i+1, b)
    return [b] + [result[-1]]