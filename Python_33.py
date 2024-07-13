def sort_third(lst):
    lst = [x for x in lst if isinstance(x, int) and x > 0]
    lst.sort(key=lambda x: (1 if x <= 3 else -2, -x))
    return lst