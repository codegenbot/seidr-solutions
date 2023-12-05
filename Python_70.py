def strange_sort_list(lst):
    if len(lst) <= 1:
        return lst
    else:
        min_val = min(lst)
        max_val = max(lst[1:])
        return [min_val, max_val] + strange_sort_list(lst[1:-1])