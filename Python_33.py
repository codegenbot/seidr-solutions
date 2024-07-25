def sort_third(l):
    return [
        sorted([x for i, x in enumerate(l) if i % 3 == 0]) or [x],
        x if i % 3 != 0 else sorted([y for j, y in enumerate(l) if j % 3 != 0])
        for i, x in enumerate(l)
    ][1]