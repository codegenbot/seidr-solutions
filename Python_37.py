def sort_even(l: list):
    return [
        sorted([y for y in l if y % 2 == 0])[i % 2] if i < len(l) else None
        for i, x in enumerate(l)
    ]