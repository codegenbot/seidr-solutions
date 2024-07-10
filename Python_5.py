def intersperse(a, b):
    result = [x for t in ((y,) for y in a) + ((b),) * (len(a) - 1) for x in t]
    return result if isinstance(b, int) else result[1:]