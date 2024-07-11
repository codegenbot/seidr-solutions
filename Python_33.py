def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else (
                sorted([x for x in l[: (i + 2) // 3 * 3] if x != val])[0]
                if [x for x in l[: (i + 2) // 3 * 3] if x != val]
                else val
            )
        )
        for i, val in enumerate(l)
    ]