def sort_third(l: list):
    indexed = {y: i for i, y in enumerate(l)}
    return [
        (
            x
            if i % 3 != 0
            else sorted([indexed[y] for y in l if (i - indexed[y]) % 3 != 0])
        )
        for i, x in enumerate(l)
    ]