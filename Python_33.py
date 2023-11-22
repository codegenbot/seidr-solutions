def sort_third(l: list):
    return sorted(l, key=lambda x: x[2] if len(x) >= 3 else float('inf'))