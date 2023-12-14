def is_simple_power(x, n):
    return abs(x - round(x**(1/n))**n) < 0.0001