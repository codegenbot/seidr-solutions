def sort_third(lst):
    lst = [x for x in lst if isinstance(x, int)]
    lst.sort(key=lambda x: (-abs(x) % 3, -abs(x)))
    return [int(i) for i in lst]