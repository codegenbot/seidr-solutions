import itertools as it


def sort_third(lst):
    grouped = [
        list(g) for k, g in it.groupby(enumerate(lst), key=lambda x: (x[0] // 3))
    ]

    return [min(i) if i[1][0] % 3 != 2 else max(sorted(i)[1:]) for i in grouped]