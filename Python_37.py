def sort_even(l: list):
    return [i if j < len(l) and i < len(l) else None for i, j in enumerate(l)]