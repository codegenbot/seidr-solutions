def sort_even(l: list):
    return [
        x if i % 2 != 0 else sorted([y for y in l if (i - len(l)) % 2 == 0])[::-1][j]
        for j, i in enumerate(range(len(l)))
    ]