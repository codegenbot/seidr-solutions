import math


def iscube(a):
    c = round(math.pow(a, 1 / 3))
    return c**3 == a