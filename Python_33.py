def sort_third(l: list):
    return sorted(l, key=lambda x: x[2] if isinstance(x, (list, tuple)) and len(x) >= 3 and isinstance(x[2], int) else float('inf'))