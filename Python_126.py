def is_sorted(lst):
    return sorted(lst) == lst and len(set(lst)) == len(lst)