def sorted_list_sum(lst):
    return sum(sorted([int(x) for x in lst if isinstance(x, int)]))