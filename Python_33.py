def sort_third(lst: list) -> list:
    return sorted((x % 10, x) for x in lst)