```
def sort_third(l):
    l.sort(key=lambda x: (x % 3, x))
    return l