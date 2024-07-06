```
def sort_third(l: list):
    l_copy = [i for i in l]
    return [i if i % 3 != 0 else min([x for x in l_copy if x % 3 == 0 and x != i], default=None) or None for i in l]