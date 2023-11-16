import math


def sum_squares(lst):
    return sum(map(lambda x: math.ceil(x) ** 2, lst))
