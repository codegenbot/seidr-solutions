def sort_even(l: list):
    return [
        (
            x
            if i % 2
            else sorted([y for y in l[: len(l) // 2] + l[len(l) // 2 + 1 :] if y <= x])[
                0
            ]
        )
        for i, x in enumerate(l)
    ]