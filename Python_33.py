```
def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [None] * (3 - len(l) % 3)
    l1 = [x for i, x in enumerate(l) if i % 3 == 0]
    l2 = [x for i, x in enumerate(l) if i % 3 == 1]
    l3 = sorted([x for i, x in enumerate(l) if i % 3 == 2])

    sorted_l1 = sorted(l1)
    sorted_l3 = l3[::-1]

    return [
        (
            x
            if i % 3 != 0
            else (x if i % 3 == 1 else next(y for y in sorted_l3 if y > x) or None)
        )
        for i, x in enumerate(sorted_l1 + [l2[0]] + l3)
    ]