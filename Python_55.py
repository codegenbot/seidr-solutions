

def is_prime(n: int) -> bool:
    """Check if number is prime.
    >>> is_prime(-1)
    False
    >>> is_prime(0)
    False
    >>> is_prime(1)
    False
    >>> is_prime(2)
    True
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(5)
    True
    >>> is_prime(6)
    False
    >>> is_prime(7)
    True
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
    """
