def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (_, y) in zip(enumerate(l), sorted(list(zip(*[iter(l)] * 2))))
    ]