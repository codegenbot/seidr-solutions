def is_simple_power(x, n):
    return x > 0 and n > 0 and n == 1 if x != 1 else x**(1/n) == n