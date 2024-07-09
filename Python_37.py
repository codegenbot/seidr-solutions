from collections import OrderedDict

def sort_even(l: list):
    return list(OrderedDict((i,x) if i % 2 == 0 else (i,x) for i, x in enumerate(l)).values()) + [x for i, x in enumerate(l) if i % 2 != 0]