def is_simple_power(x, n):
    return abs(x - round(n ** (round(x ** (1/n)), 0)) < 1e-6)