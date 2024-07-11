def sort_third(lst):
    if len(lst) < 3:
        return []
    sorted_lst = sorted((x[2], i) for i, x in enumerate(lst))
    return [x[0] for _, x in zip(sorted_lst, lst)][::3]