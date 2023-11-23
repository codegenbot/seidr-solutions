def is_simple_power(x, n):
    return abs(x - n**(1/x)) < 0.000001