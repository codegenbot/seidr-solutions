def sort_even(l: list):
    return [
        x if i % 2 != 0 else [x for x in l if i // 2 == l.index(x)][0]
        for i, x in enumerate(l)
    ]