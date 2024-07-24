def sort_third(lst: list) -> list:
    return sorted([(i // 10, i) for i in lst])