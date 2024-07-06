def sort_even(l: list):
    return [
        (
            i
            if i % 2 != 0
            else sorted([j for j in l if (l.index(j) + 1) % 2 == 0])[::-1][k]
        )
        for k, i in enumerate(l)
    ]