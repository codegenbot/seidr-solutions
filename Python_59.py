

def largest_prime_factor(n: int):
    """Return the largest prime factor of n. Assume n > 1 and is not a prime.
    >>> largest_prime_factor(13195)
    29
    >>> largest_prime_factor(2048)
    2
    for i in range(n - 1, 0, -1):
        if n % i == 0 and is_prime(i):
            return i


def is_prime(n: int):
    """Return True if n is prime, False otherwise.
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(29)
    True
    """
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
    """
