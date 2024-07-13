def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [y for y in l if (i - l.index(y)) % 3 == 2 or y < x], key=lambda y: y[2]
            )
        )
        for i, x in enumerate(l)
    ]