def is_simple_power(x, n):
    if x < 1:
        return False
    root = round(math.pow(x, 1/n))
    return math.isclose(root ** n, x)