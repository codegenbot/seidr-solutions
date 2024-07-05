```
def sort_third(l):
    return tuple(sorted([(a[2], a) for a in l if isinstance(a, list) and len(a) == 3]))