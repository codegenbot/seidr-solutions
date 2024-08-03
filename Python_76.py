def is_simple_power(x, n):
    if x == 1:
        return True
    root = int(x ** (1.0 / float(n)))
    return root**n == x