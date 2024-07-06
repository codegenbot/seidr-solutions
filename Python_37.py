def sort_even(l: list):
    return [
        i if i % 2 != 0 else j
        for j in sorted([j for i, j in zip(l, range(len(l)))[::2]])
    ] + l[1::2]