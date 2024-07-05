def is_sorted(lst):
    if len(lst) != len(set(lst)) and any(lst.count(x) > 2 for x in lst):
        return False
    return lst == sorted(lst)