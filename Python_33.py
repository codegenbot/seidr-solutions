def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted(
                [x for x in l if x % 3 == 0 and x not in [j for j in l if j % 3 != 0]][
                    0
                ],
                reverse=True,
            )[0]
        )
        for i in l
    ]