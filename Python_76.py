def is_simple_power(x, n):
    return abs(x - n ** (int(x ** (1/n)))) < 1e-9