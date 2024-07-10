def sort_even(l: list):
    if len([x for x in l if x % 2 == 0]) < 1:
        return l
    return [
        x if i % 2 == 0 else y
        for i, (x, y) in enumerate(zip(sorted([y for y in l[1::2]]), l[::2]))
    ]