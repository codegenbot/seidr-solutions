def sort_third(l: list):
    return sorted(l, key=lambda x: x if isinstance(x, list) and len(x) >= 3 else [])