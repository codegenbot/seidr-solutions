def intersperse(a, b):
    if not a:
        return [b]
    result = [b]
    for item in a:
        result.extend([item, b])
    return result