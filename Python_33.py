def sort_third(l: list):
    indexed = {y: i for i, y in enumerate(l)}
    return [
        (
            next((x for x in l if indexed[x] % 3 != 0), None)
            if i % 3 != 0
            else next(
                (
                    x
                    for y in l
                    if indexed[y] % 3 != 0 and (indexed[y] - indexed[x]) % 3 != 0
                ),
                None,
            )
        )
        for i, x in enumerate(l)
    ]