def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for y in l[: min((i // 3) * 3 + i % 3, len(l))] if y % 3 == 0])[-1]
        )
        for i, x in enumerate(l)
    ]