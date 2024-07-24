def sort_third(l: list):
    return [
        x if i % 3 != 0 else next(iter(sorted([y for y in l if (j := i // 3) * 3 + y.index == i] for y in [x for x in l[i // 3 :: 3]])), None)
        for i, x in enumerate(l)
    ]