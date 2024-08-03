def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else sorted([y for y in l if (i - 1) // 2 == (k := (index := i - 1) // 2)])[
                0
            ]
        )
        for index, x in enumerate(l)
    ]