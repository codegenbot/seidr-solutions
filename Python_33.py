def sort_third(l: list):
    return sorted(l, key=lambda x: (0, x) if isinstance(x, list) and len(x) >= 3 else (-1, x))