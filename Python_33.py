```
def sort_third(l: list):
    l.sort(key=lambda x: (l.index(x), x))
    return l