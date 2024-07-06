from math import isclose


def any_int(x, y, z):
    if not (isinstance(x, int) and isinstance(y, int) and isinstance(z, int)):
        return False
    if isclose(x + y, z) or isclose(x + z, y) or isclose(y + z, x):
        return True
    else:
        return False