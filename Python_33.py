def sort_third(l):
    int_list = [i for item in l for i in (item if isinstance(item, list) else [item]) if isinstance(i, int)]
    int_list.sort()
    return [sublist[1] for sublist in [[int_list.count(i), i] for i in set(int_list)]]