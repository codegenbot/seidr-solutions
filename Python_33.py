```Python
def sort_third(lst):
    return tuple(x for i,x in enumerate(lst) if x % 3 != 0)