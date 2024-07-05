def next_smallest(lst):
    unique_sorted_lst = sorted(set(lst))
    return unique_sorted_lst[1] if len(unique_sorted_lst) > 1 else None