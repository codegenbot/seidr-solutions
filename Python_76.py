def is_simple_power(x, n):
    return x > 0 and n > 0 and round(x ** (1 / n)) ** n == x