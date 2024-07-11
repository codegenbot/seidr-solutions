def sort_third(l: list):
    return [x[1] if i % 3 != 0 else min(x[1] for x in l) for i, x in enumerate(l)]