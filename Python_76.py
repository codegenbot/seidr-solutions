def is_simple_power(x, n):
    return x % n == 0 and n > 1 and is_simple_power(x // n, n) if x > 1 else x == 1