def intersperse(a, b):
    result = [b]
    for x in a:
        result.insert(0, x)
        result.append(b)
    return result