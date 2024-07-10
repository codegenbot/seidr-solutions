def is_simple_power(x, n):
    if x < 1:
        return False
    root = round(x ** (1 / n))
    return root ** n == x