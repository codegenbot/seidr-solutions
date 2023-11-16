
def is_prime(n):
    """Return True if n is a prime number; otherwise return False.
    """
    if n < 2:
        return False
    else:
        for i in range(2, n):
            if n % i == 0:
                return False
    return True


def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5

    if n % 2 == 0:
        return x + y
    else:
        return x - y
    """
