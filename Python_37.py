from collections import OrderedDict


def sort_even(l: list):
    even_list = [x for x in l if x % 2 == 0]
    odd_list = [x for x in l if x % 2 != 0]
    return sorted(even_list) + sorted(odd_list)