def sort_even(l: list):
    return [
        i if i % 2 != 0 else j
        for j, i in sorted((i, j) for j, i in enumerate(l))
        if j % 2 == 0
    ]