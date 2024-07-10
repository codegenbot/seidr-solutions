def intersperse(a, b):
    result = []
    if isinstance(b, int):
        b = [str(b)] * len(a)
    elif not isinstance(b, str):
        return "Invalid input type."
    
    for item in a:
        result.append(item)
        result.append(b)
    return result