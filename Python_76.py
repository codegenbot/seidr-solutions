import math

def is_simple_power(x, n):
    return round(n ** (round(math.log(x, n)) / math.log(n, n))) == x