def intersperse(a, b):
    result = [None]
    for i in range(len(a) + len(b)):
        if i % 2 == 0:
            result.append(a[i//2] if i < len(a) else None)
        else:
            result.append(b[(i-1)//2] if i > len(a) else None)
    return [x for x in result if x is not None]