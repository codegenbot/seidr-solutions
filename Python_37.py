def sort_even(l: list):
    return [
        (x if i % 2 else x if i % 2 == 0 else min(y for y in [x] if isinstance(y, int)))
        for i, x in enumerate(l)
    ]