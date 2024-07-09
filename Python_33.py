def sort_third(l: list):
    return [
        next(
            (
                (x,)
                if i % 3 != 0
                else (sorted([y for y in l if y == x and i % 3 != 0]) or [x])
            ),
            [],
        )
        for i, x in enumerate(l)
    ]