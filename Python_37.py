def sort_even(l: list):
    evens = [
        (j, j) if j % 2 == 0 else (j, i)
        for i, j in zip(sorted([j for j in l if j % 2 == 0]), l)
    ]
    return [i if pair[1] % 2 != 0 else pair[0] for pair in evens]