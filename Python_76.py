import math

def is_simple_power(x, n):
    if x == 0:
        return n == 0
    elif x == 1:
        return n == 1
    else:
        return n != 0 and math.isclose(x ** (1 / n), int(x ** (1 / n)), rel_tol=1e-9)