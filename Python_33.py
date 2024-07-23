def sort_third(lst: list) -> list:
    return sorted((i // 100, i) for i in lst)