def sort_third(lst):
    lst.sort(key=lambda x: 0 if not isinstance(x, list) or len(x) <= 2 else x[2])
    return [x for x in lst if isinstance(x, list) and len(x) > 2]