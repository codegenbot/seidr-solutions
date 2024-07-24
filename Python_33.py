def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for y in l if (y - min(l)) % 3 == 2])[::-1][0]
        )
        for i, x in enumerate(l)
    ]