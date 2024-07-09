def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for i, (x, y) in enumerate(sorted(list(zip(*[l[i::2] for i in range(len(l))]))))
    ]