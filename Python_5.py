def intersperse(a, b):
    result = []
    for i in range(len(a) + (1 if isinstance(b, int) else 0)):
        if i < len(a): result.append(a[i])
        if isinstance(b, int) and i % (len(a) + 1) != 0: result.append(b)
        elif b: result.append(b)
    return result + [b] * ((len(a) + (1 if isinstance(b, int) else 0)) - len(a))