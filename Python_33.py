```
def sort_third(l):
    l.sort(key=lambda x: (3 - x % 3, -abs(x)))
    return [i for i in l]