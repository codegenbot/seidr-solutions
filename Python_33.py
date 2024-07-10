def sort_third(l):
    non_lists = [x for sublist in l for x in sublist if not isinstance(x, list)]
    lists = [sublist for sublist in l if isinstance(sublist, list)]
    return sorted(non_lists + lists)