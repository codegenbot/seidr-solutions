def is_simple_power(x, n):
    return x > 0 and n > 0 and x == n ** int(float(x) ** (1 / n))