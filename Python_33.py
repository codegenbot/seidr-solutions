def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([i for i in l[: len(l) // 3 * 3] if i % 3 == 0])[
                j % len(l) // 3
            ]
        )
        for j, x in enumerate(l)
    ]