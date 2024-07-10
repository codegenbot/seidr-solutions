```Python
def sort_third(lst):
    lst.sort(key=lambda x: (x % 3, -x))
    return lst