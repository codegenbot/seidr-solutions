def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted((val, i) for i, val in enumerate(l))[::-1][0][1]
        )
        for i, val in enumerate(l)
    ]