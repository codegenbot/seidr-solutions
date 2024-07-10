def sort_third(l):
    int_list = sorted([i for i in l if isinstance(i, int)])
    lst_list = [[sublist.sort(), len(sublist)] for sublist in [sublist for sublist in l if isinstance(sublist, list)]]
    return [i for sublist in lst_list for i in sublist] + int_list