def sort_third(lst: list) -> list:
    return sorted((int(str(i)[2]), i) for i in lst if len(str(i)) > 2)