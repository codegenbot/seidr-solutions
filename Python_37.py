def sort_even(l: list):
    return [
        (
            val
            if i % 2 != 0
            else sorted([x for x in l if (i - 1) // 2 * 2 + 1 == j])[j % 2]
        )
        for i, val in enumerate(l)
    ]