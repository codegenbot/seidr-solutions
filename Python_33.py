def sort_third(lst):
    return tuple(sorted([x[2] for x in lst if isinstance(x, (list, tuple)) and len(x) > 2]))