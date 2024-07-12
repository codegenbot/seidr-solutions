def is_simple_power(x, n):
    return x > 0 and n > 0 and x == round(n ** (x ** (1 / n)))