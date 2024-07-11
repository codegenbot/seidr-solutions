def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(range(len(l)), sorted((x for x in l[1::2])))
    ]