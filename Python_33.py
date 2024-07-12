def sort_third(l: list):
    try:
        return sorted(l, key=lambda x: x if isinstance(x, int) else x[2])
    except (IndexError, TypeError):
        return []