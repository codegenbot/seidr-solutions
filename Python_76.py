import math

def is_simple_power(x, n):
    return math.isclose(x, n**x, rel_tol=1e-9)