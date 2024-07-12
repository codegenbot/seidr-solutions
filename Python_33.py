def sort_third(l: list):
    try:
        return sorted(l, key=lambda x: x[2])
    except (IndexError, TypeError):
        return []