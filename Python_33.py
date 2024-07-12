import itertools as it


def sort_third(lst):
    grouped = [
        list(g)
        for k, g in it.groupby(
            [(k % 3, v) for k, v in enumerate(lst)], key=lambda x: x[0]
        )
    ]
    return [min(i) if i[1] % 3 != 0 else max(sorted(i)[1:]) for i in grouped]