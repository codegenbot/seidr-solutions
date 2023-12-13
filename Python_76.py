def is_simple_power(x, n):
    if x == 1:
        return True
    elif n == 1:
        return False
    else:
        return x % n == 0 and is_simple_power(x // n, n)