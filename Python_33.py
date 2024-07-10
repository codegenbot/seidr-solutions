```
def sort_third(l: list):
    while None in l:
        l.remove(None)
    l1 = [x for i, x in enumerate(l) if i % 3 == 0]
    l2 = [x for i, x in enumerate(l) if i % 3 == 1]
    l3 = [x for i, x in enumerate(l) if i % 3 == 2]

    sorted_l1 = sorted(l1)
    sorted_l3 = sorted([y for y in l3 if y is not None])[::-1]

    return [
        x if i % 3 != 0 else (x if i % 3 == 1 else next(y for y in l3[::-1] if y > x))
        for i, x in enumerate(sorted_l1 + [l2[0]] + sorted_l3)
    ]