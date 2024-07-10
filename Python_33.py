def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [None] * (3 - len(l) % 3)
    l1 = sorted([x for i, x in enumerate(l) if i % 3 == 0])
    l2 = [x for i, x in enumerate(l) if i % 3 == 1]
    l3 = sorted([x for i, x in enumerate(l) if i % 3 == 2])

    return [
        (
            x
            if i % 3 != 0
            else (x if i % 3 == 1 else next((y for y in reversed(l3) if y > x), None))
        )
        for i, x in enumerate(l1 + l2 + list(reversed(l3)))
    ]