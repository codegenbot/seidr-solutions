def intersperse(a, b):
    result = []
    i = 0
    for item in (a + [b] if isinstance(b, int) else [item for pair in zip(a, [b]*len(a)) for item in pair]):
        result.append(item)
    return result