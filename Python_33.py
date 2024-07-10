def sort_third(lst):
    return sorted([x[2] for x in lst if isinstance(x, list) and len(x) > 2])