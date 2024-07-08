def sort_third(lst):
    third = sorted([x for x in lst if lst.index(x) % 3 == 0])
    return [i if i % 3 != 0 else j for i, j in enumerate(sorted(lst))]