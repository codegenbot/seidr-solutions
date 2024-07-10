def sort_third(l):
    flat_list = [x for sublist in l for x in sublist]
    return sorted([i for i in flat_list if isinstance(i, int)]) + [sublist for sublist in l if isinstance(sublist, list)]