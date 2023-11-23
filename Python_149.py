def sorted_list_sum(lst):
    try:
        sorted_lst = sorted([x for x in lst if isinstance(x, int)])
        return sorted_lst
    except TypeError:
        return []