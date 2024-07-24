def sort_third(lst: list) -> tuple:
    return tuple(sorted((str(i)[0], i) for i in lst))