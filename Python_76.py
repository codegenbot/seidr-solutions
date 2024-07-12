def is_simple_power(x, n):
    return x > 0 and n > 0 and (n == 1 or x == n ** int(x ** (1 / n)))