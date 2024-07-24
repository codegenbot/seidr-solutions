def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else sorted([y for y in l if (i - {z:i for z in l}.get(y)) % 3 != 0])[::-1][0]
        )
        for i, x in enumerate(l)
    ]