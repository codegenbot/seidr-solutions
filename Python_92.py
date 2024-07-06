from math import isclose


def any_int(x, y, z):
    if isclose(x + y, z) or isclose(x + z, y) or isclose(y + z, x):
        return True
    else:
        return False