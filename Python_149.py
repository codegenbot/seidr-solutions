def sorted_list_sum(lst):
    return sum(sorted(len(x) for x in set(lst)), 0)