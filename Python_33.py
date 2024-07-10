def sort_third(l: list):
    return [
        i if i % 3 != 0 else j
        for i, j in zip(l, sorted([j for j in l if j % 3 == 0]))
    ]