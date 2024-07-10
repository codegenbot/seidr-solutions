def intersperse(a, b):
    if not a:
        return [b]
    result = [a[0]]
    for item in a[1:]:
        result.extend([item, b])
    result.append(b)
    return result