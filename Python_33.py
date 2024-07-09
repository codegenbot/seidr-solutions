def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for x in l if (j := i // 3) * 3 <= index < (j + 1) * 3])[::-1][0]
        )
        for i, val in enumerate(l)
    ]