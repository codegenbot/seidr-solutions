```Python
def sort_third(l):
    l.sort(key=lambda x: (x % 3, -abs(x)))
    return [i for i in l]