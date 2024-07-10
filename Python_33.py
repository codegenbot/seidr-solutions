def sort_third(lst):
    lst.sort(key=lambda x: x[2] if isinstance(x, list) and len(x) > 2 else None)
    return [x for x in lst if isinstance(x, list) and len(x) > 2]