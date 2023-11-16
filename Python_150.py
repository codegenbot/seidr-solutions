
def is_prime(n):
    """Return True if n is prime, else False.

    Examples:
    is_prime(7) == True
    is_prime(15) == False
    is_prime(3) == True
    """
    i = 2
    while i < n:
        if n % i == 0:
            return False
        i = i + 1
    return True


def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is
    a prime number and should return the value of y otherwise."""
    if is_prime(n) == True:
        return x
    else:
        return y


print(x_or_y(7, 34, 12) == 34)
print(x_or_y(15, 8, 5) == 5)
