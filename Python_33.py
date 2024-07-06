def sort_third(l: list):
    return [
        (
            next((y for y in l if y == x and i % 3 != 0), None)
            if i % 3 != 0
            else min([y for y in l if y == x], default=None)
        )
        for i, x in enumerate(l)
    ]