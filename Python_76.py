import math

def is_simple_power(x, n):
    return x == n ** (x ** (1 / n)) and math.is_integer(x ** (1 / n))