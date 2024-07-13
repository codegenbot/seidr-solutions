def sort_third(lst):
    result = [x[2] for x in lst if isinstance(x, (list, tuple)) and len(x) > 2]
    return tuple(sorted(result))