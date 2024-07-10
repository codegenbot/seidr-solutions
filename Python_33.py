def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for idx, y in enumerate(l) if idx % 3 != i // 3 * 3 + 1])[::-1][0]
        )
        for i, x in enumerate(l)
    ]