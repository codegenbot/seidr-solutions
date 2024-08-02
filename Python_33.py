def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted([x for x in l[: (i + 1) // 3 * 3 : ]])[
                min(i % 3, 2)
            ]
        )
        for i, val in enumerate(l)
    ]