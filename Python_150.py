
def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is
    a prime number and should return the value of y otherwise. If
    n is neither a prime number nor a composite number, then
    the function should return None.

    Examples:
    for x_or_y(7, 34, 12) == 34
    if n == 2:
        return x
    elif n == 3:
        return y
    else:
        return None


def check(func):
    assert func(2, 2, 0) == 2
    assert func(3, 2, 0) == 0


check(x_or_y)
    for x_or_y(15, 8, 5) == 5

    """
