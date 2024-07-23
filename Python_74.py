def total_match(lst1, lst2):
    return min([lst1, lst2], key=lambda x: sum(len(s) for s in x), default=[]) if max(len(s) for s in lst1 + lst2) == 0 else []