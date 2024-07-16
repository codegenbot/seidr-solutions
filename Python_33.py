def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [
                    y
                    for y in l
                    if (l.index(y) % 3 == 0 and j < l.index(y)) or (j >= l.index(y))
                ]
            )(j)
        )
        for j, x in enumerate(l)
    ]