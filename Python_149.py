def sorted_list_sum(lst):
    return sum(len(x) for x in sorted(lst) if len(x) % 2 == 0)