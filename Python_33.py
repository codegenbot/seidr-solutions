def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [
                    y
                    for y in l
                    if (j := i - i % 3) // 3 * 3 <= j < (j := i - i % 3) // 3 * 3 + 3
                    and j != i
                ]
            )[0]
        )
        for i, x in enumerate(l)
    ]