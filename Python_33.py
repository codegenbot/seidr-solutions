def sort_third(lst):
    lst.sort(key=lambda x: (-abs(x) % 3, -x))
    return lst