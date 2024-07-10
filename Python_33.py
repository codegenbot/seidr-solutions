def sort_third(l):
    int_list = [i for i in l if isinstance(i, int)]
    return sorted(int_list) + [sublist for sublist in l if not isinstance(sublist, int)]