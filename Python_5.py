def intersperse(a, b):
    if isinstance(b, list):
        result = []
        result.extend(a)
        for elem in b:
            result.append(elem)
        result.extend(a)
    else:
        result = []
        i = 0
        for item in (a + ([b] if isinstance(b, int) else [item for pair in zip(a, [iter([b])]*len(a)) for item in pair])):
            result.append(item)
    return result