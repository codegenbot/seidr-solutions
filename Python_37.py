```Python
from collections import OrderedDict


def sort_even(l: list):
    result = []
    for i, x in enumerate(l):
        if x % 2 == 0:
            result.append(x)
        else:
            result.insert(0, x)

    return result