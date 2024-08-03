def sort_even(l: list):
    return [
        x if i % 2 else y
        for (i, x), (j, y) in zip(enumerate(l), sorted(list(zip(*[iter(l)] * 2)))[::2])
    ]