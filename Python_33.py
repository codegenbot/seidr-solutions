def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted(
                [
                    y
                    for y in l
                    if (i_val := i) - 1 // 3 * 3 + j == i_val - 1 and j % 3 != 0
                ][::-1]
            )[0]
        )
        for i, x in enumerate(l)
    ]