

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    for i in range(n, 1, -1):
        if n % i == 0 and is_prime(i):
            return i


def is_prime(n: int):
    """Return True if n is a prime number, False otherwise.
    >>> is_prime(2)
    True
    >>> is_prime(7)
    True
    >>> is_prime(8)
    False
    """
    if n == 2:
        return True
    elif n % 2 == 0:
        return False
    else:
        for i in range(3, n, 2):
            if n % i == 0:
                return False
        return True
    """
