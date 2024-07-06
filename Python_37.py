from collections import OrderedDict

def sort_even(l: list):
    return [x if i % 2 != 0 else list(OrderedDict(sorted((y for y in l if (i // 2) * 2 == l.index(y))))).pop(0)
            for i, x in enumerate(l)]