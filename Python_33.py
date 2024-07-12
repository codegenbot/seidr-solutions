import itertools


def sort_third(lst):
    return [
        sum(g) // len(g)
        for _, g in itertools.groupby(
            sorted((i // 3, j) for i, j in enumerate(lst)), key=lambda x: (x[0])
        )
    ]