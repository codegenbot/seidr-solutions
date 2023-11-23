def sort_third(lst: list):
    if len(lst) % 3 != 0:
        lst += [float('inf')] * (3 - len(lst) % 3)
    sorted_lst = sorted([lst[i:i+3] for i in range(0, len(lst), 3)], key=lambda x: x[2] if len(x) >= 3 else float('inf'))
    sorted_lst = [sublst for sublst in sorted_lst if len(sublst) >= 3]
    return sorted_lst