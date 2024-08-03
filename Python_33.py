def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0 or i >= len(l)
            else sorted([y for y in l[: (i + 1)]])[-1] if i // 3 * 3 <= i else x
        )
        for i, x in enumerate(l)
    ]