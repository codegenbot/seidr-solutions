def sort_third(lst):
    return sorted([i for i in lst if (lst.index(i) + 1) % 3 == 0])