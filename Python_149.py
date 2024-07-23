def sorted_list_sum(lst):
    return [i for i in set([j for j in lst if len(j) % 2 == 0]) if i]