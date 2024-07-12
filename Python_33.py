def sort_third(l: list):
    return sorted(l, key=lambda x: x[2] if isinstance(x, (list, tuple)) and len(x) >= 3 else x if isinstance(x, int) else 0)