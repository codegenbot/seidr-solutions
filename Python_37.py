def sort_even(l: list):
    return [
        x if i % 2 == 0 else y
        for i, (x, y) in enumerate(sorted((y for i, y in enumerate(l) if i % 2 == 0)))
    ]