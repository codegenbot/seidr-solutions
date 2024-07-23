def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [y for y in l[: i // 3 * 3 + (i % 3 != 0) * 3 : i + 1] if y % 3 == 0]
            )[0]
        )
        for i, x in enumerate(l)
    ]