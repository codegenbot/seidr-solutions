def sort_third(lst: list):
    sorted_lst = sorted(lst, key=lambda x: x if x % 3 == 0 else float('inf'))
    return sorted_lst