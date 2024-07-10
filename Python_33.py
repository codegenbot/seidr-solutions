def sort_third(l):
    int_list = sorted([i for i in l if isinstance(i, int)])
    lst_list = [sublist for sublist in l if isinstance(sublist, list)]
    return int_list + lst_list