def sort_third(l):
    int_list = sorted([i for item in l for i in (item if isinstance(item, list) else [item]) if isinstance(i, int)])
    return [sublist[1] for sublist in [[sublist, len(sorted(sublist))] for sublist in l if isinstance(sublist, list)]]