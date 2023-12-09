def sorted_list_sum(lst):
    return sorted([int(x) for x in lst.split(',')], key=len)