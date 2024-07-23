def sorted_list_sum(lst):
    return str(sum(sorted([int(i) for i in lst if isinstance(i, int)])))