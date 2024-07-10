def intersperse(a, b):
    result = [b]
    for item in a:
        result.extend([item, b])
    if b:  
        result.append(b)
    return result