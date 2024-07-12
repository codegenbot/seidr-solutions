import itertools


def sort_third(lst):
    grouped = [(i // 3, j) for i, j in enumerate(lst)]
    grouped.sort()
    return [
        min(group[1:]) if group[0] % 3 != 0 else max(group[1:])
        for group in itertools.groupby(grouped, key=lambda x: (x[0]))
    ]