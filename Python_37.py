def sort_even(l: list):
    return [
        (
            x
            if i % 2
            else sorted(
                [y for y in l if (i // 2) * 2 < len(l) and (i // 2) * 2 + 1 == j]
            )[0]
        )
        for i, x in enumerate(l)
    ]