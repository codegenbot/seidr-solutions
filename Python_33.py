def sort_third(l):
    l_copy = l.copy()
    l_copy.sort(key=lambda x: (x % 3, -x))
    return [i for i in l_copy]