def search(lst):
    return max([x for x in set(lst) if lst.count(x) >= x], default=-1)