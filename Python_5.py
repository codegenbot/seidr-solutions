def intersperse(a, b):
    result = []
    for i in range(len(a) + len(b)):
        if i < len(a): 
            result.append(a[i])
        elif i >= len(a):
            result.append(b)
        else:
            if isinstance(b, int):
                result.append(b)
            else:
                result.extend(b)
    return result