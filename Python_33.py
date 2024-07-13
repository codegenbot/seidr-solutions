```
def sort_third(l):
    l_copy = sorted(l, key=lambda x: (x % 3, -x))
    return l_copy