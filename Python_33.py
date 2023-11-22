def sort_third(l: list):
    return sorted(l, key=lambda x: (isinstance(x, list) and len(x) >= 3, x))