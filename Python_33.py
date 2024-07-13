```
def sort_third(lst):
    return sorted([(x[2], x) for x in lst if isinstance(x, (list, tuple))])