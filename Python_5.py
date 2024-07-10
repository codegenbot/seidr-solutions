def intersperse(a, b):
    result = [b]
    for x in a:
        result.extend([x])
        result.append(b)
    return result