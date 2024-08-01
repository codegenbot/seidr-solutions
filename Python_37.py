def sort_even(l: list):
    return [
        (
            x
            if i % 2
            else next((y for y in l if not isinstance(y, int) or y % 2 == 0), None)
        )
        for i, x in enumerate(l)
    ]