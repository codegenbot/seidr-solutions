```
def sort_even(l: list) -> tuple:
    pos_evens = sorted([x for x in l if 0 < x and x % 2 == 0])
    neg_evens = sorted([-x for x in l if x < 0 and x % 2 == 0])
    odds = sorted([x for x in l if (x < 0 and x % 2 != 0) or (x > 0 and x % 2 != 0)])

    result = []
    while len(odds) >= len(pos_evens) and len(odds) >= len(neg_evens):
        while pos_evens:
            result.append(pos_evens.pop(0))
        while neg_evens:
            result.append(-neg_evens.pop(0))
        if odds:
            result.append(odds.pop(0))

    if pos_evens:
        result.extend(pos_evens)
    else:
        result.extend([-x for x in neg_evens])
    result.extend(odds)

    return tuple(result)