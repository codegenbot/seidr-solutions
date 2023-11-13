def is_prime(n):
    """Return True if n is prime and False otherwise.
    """
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, n):
        if n % i == 0:
            return False
    return True

def x_or_y(n, x, y):
    if is_prime(n):
        return x
    else:
        return y


def is_prime(n):
    if n < 2:
    return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
