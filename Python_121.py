def find_max_difference(lst):
    lst.sort()
    return lst[-1] - lst[0]