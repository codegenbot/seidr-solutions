def sorted_list_sum(lst):
    return list(filter(lambda x: sum(len(s) for s in x) % 2 == 0, lst))