def sort_third(l: list):
    non_list = [x for x in l if not isinstance(x, list)]
    lists = [sub for sub in l if isinstance(sub, list)]
    return sorted(non_list + [item for sublist in lists for item in sublist])