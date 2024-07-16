def is_simple_power(x, n):
    return x > 0 and (x == 1 or (x % n == 0 and is_simple_power(x // n, n)))