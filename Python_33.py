def sort_third(lst: list):
    sorted_lst = sorted(lst, key=lambda x: x[2] if len(x) > 2 else float('inf'))
    return sorted_lst