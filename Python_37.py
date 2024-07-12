def sort_even(l: list):
    return [x if i % 2 != 0 else y for (i, x), (_, y) in sorted(zip(range(len(l)), l))]