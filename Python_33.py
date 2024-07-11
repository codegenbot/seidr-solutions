def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for x in min(l, i // 3 * 3 + i % 3)[:] if x % 3 != 0])[-1]
        )
        for i, val in enumerate(l)
    ]