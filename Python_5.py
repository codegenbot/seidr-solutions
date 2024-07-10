def intersperse(a, b):
    result = [b]
    if a:
        for item in a:
            result.extend([item, b])
        result.append(b)
    else:
        return [b]
    return result