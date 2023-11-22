def sort_third(l: list):
    return sorted(l, key=lambda x: len(x) if isinstance(x, (list, int)) and len(x) >= 3 else float('-inf'))