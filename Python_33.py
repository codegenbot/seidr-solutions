def sort_third(l: list):
    l = [
        [x] if i % 3 == 0 else ([y for y in l if (i - l.index(y)) % 3 == 2 or y < x])
        for i, x in enumerate(l)
    ]
    return [sorted(x[2:]) for x in l]