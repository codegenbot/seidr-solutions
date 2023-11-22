def sort_third(l: list):
    return sorted(
        l, key=lambda x: x[2] if isinstance(x, list) and len(x) >= 3 else float("inf")
    )