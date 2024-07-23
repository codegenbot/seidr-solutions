```
def sort_third(l: list):
    l.sort(key=lambda x: (x % 3 != 0, x))
    return l