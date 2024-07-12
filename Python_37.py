def sort_even(l: list):
    return [
        i if j % 2 else sorted([x for x in l if (index := i + 1) % 2 == 0])[i % 2]
        for i, j in enumerate(l)
    ]