def sort_third(l: list):
    return [
        x if i % 3 != 0 else min(x for x in l)
        for i, x in enumerate(sorted((x for y in l for x in (y,)))[::3])
    ]