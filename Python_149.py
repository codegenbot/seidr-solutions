def sorted_list_sum(lst):
    if isinstance(lst[0], str):
        return sorted(lst)
    return sum(sorted(lst))