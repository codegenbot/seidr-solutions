def intersperse(a, b):
    result = []
    for i in range(len(a) + (1 if isinstance(b, int) else len(b))):
        if i < len(a): 
            result.append(a[i])
        if isinstance(b, int) and i < len(a): 
            result.append(b)
        elif isinstance(b, (list, str)):
            if i < len(a):
                result.append(a[i])
            result.extend(b)
    return result