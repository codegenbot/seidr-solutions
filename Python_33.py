```
def sort_third(l: list):
    return sorted([x for x in l if isinstance(x, list) or isinstance(x, tuple)], key=lambda x: x[2])