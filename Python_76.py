import math


def is_simple_power(x, n):
    return pow(n, int(math.log(x, n))) == x