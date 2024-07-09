from collections import OrderedDict

def sort_even(l: list):
    return list(OrderedDict.fromkeys((i//2,x) if x % 2 == 0 else (i,x) for i, x in enumerate(l)).values()) + [x for x in l if x % 2 != 0]