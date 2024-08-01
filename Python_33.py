def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted(
                [
                    x
                    for j in range(len([x for x in l if i % 3 == 0]))
                    for x in [x for x in l if i % 3 == 0 and j == (i - 1) // 3]
                ]
            )[0]
        )
        for i, val in enumerate(l)
    ]