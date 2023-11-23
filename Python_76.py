def is_simple_power(x, n):
    return abs(x - n**(x**(1/n))) < 0.000001