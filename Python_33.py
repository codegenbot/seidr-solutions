def sort_third(l):
    int_list = [i for i in l if isinstance(i, int)]
    lst_list = [[sublist.sort(), sublist] for sublist in l if isinstance(sublist, list)]
    return sorted(int_list) + [sublist[1] for sublist in lst_list]