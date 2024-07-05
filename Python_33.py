def sort_third(lst):
    return tuple(sorted([(item, i) for i, item in enumerate(lst)]))