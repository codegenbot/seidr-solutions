def intersperse(a, b):
    if not a:
        return []
    result = [b]
    for item in a:
        result.extend([item, b])
    result.insert(0, *a) 
    return result