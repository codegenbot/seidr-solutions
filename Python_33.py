def sort_third(l: list):
    return sorted(l, key=lambda x: x if isinstance(x, int) else x[2])