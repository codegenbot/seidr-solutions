def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted([j for j in l if j % 3 == 0])[
                i - len([k for k in l if k % 3 == 0]) // 3
            ]
        )
        for i in range(len(l))
    ]