def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [None] * (3 - len(l) % 3)
    first, middle, last = [], [], []
    for i, x in enumerate(l):
        if i % 3 == 0:
            first.append(x)
        elif i % 3 == 1:
            middle.append(x)
        else:
            last.append(x)

    first, last = sorted(first), sorted(last, reverse=True)
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            result.append(first.pop(0))
        elif i % 3 == 1:
            result.append(middle.pop(0))
        else:
            result.append(last.pop(0) or None)

    return tuple(result)