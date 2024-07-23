def sort_third(lst: list) -> list:
    return sorted(lst, key=lambda x: (x[2], x))