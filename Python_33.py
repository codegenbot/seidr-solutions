def sort_third(lst: list) -> tuple:
    return tuple(sorted([(i//10, i) for i in lst]))