from collections import OrderedDict


def sort_even(l: list):
    even = [x for i, x in enumerate(l) if i // 2 == int(i / 2)]
    odd = [x for i, x in enumerate(l) if i // 2 != int(i / 2)]
    return sorted(even) + odd