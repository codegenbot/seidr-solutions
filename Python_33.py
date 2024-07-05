```
def sort_third(l):
    return tuple(sorted([(x[2], x) for x in l if isinstance(x, list)]))