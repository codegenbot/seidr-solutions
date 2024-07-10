def sort_third(l):
    int_list = sorted([i for i in l if isinstance(i, int)])
    lst_list = sorted([[sublist, len(sublist)] for sublist in [sublist for sublist in l if isinstance(sublist, list)]], key=lambda x: x[1])
    return int_list + [sublist[1] for sublist in lst_list]