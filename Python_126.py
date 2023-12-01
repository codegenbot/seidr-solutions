def is_sorted(lst):
    return sorted(lst) == lst and all(lst.count(x) <= 1 for x in lst)