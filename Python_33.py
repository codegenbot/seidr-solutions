def sort_third(lst):
    lst = [abs(x) for x in lst if isinstance(x, int) and x > 0]
    lst.sort(key=lambda x: (-x % 3, -x))
    return lst