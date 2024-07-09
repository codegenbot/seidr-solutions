def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for y in l[: i // 3 * 3 + i % 3] if y % 3 == 0])[-1]
        )
        for i, x in enumerate(l)
    ]