def sort_even(l: list):
    return [
        (
            x
            if i % 2 != 0
            else (
                sorted([y for y in l if (i - 1) // 2 == ((l.index(y)) // 2) if y in l])[
                    -1
                ]
                if any(y in l for y in l) and i < len(l)
                else x
            )
        )
        for i, x in enumerate(l)
    ]