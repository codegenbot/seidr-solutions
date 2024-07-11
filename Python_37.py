def sort_even(l: list):
    return [
        i if i % 2 != 0 else j for i, j in zip(l, sorted([j for j in l if j % 2 == 0]))
    ]