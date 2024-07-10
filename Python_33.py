def sort_third(l):
    int_list = [i for sublist in l for i in sublist if isinstance(i, int)]
    return [sublist[1] for sublist in [[sublist, len(sorted(sublist))] for sublist in l if isinstance(sublist, list)]]