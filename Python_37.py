def sort_even(l: list):
    return [
        (
            x
            if i % 2
            else sorted(
                [y for y in l if (j := i // 2) * 2 < len(l) and (j * 2 + 1) == i]
            )[0]
        )
        for i, x in enumerate(l)
    ]