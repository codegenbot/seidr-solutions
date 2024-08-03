def sort_even(l: list):
    return [
        x if i % 2 != 0 else min([x for x in l if i % 2 == 0])
        for i, x in enumerate(l)
    ]