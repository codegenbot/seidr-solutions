def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else sorted(
                [y for y in l if (j := int(i / 2)) == l.index(y) and j % 2 == 0]
            )[0]
        )
        for i, x in enumerate(l)
    ]