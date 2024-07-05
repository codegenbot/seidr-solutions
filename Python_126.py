def is_sorted(lst):
    if len(lst) != len(set(lst)):
        for num in lst:
            if lst.count(num) > 2:
                return False
    return lst == sorted(lst)