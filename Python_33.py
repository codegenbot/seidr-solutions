```
def sort_third(lst):
    lst.sort(key=lambda x: (abs(x), -x % 3))
    return lst