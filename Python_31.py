

def is_prime(n):
    """Return true if a given number is prime, and false otherwise. 
    A prime number is a number that is only divisible by itself and 1. 
    For example, 11 is prime, because it can only be divided by 1 or 11.
    Any number that can be divided by a number other than itself or 1 is not prime.
    For example, 12 is not prime, because it can be divided by 2, 3, 4, or 6.
    >>> is_prime(6)
    False
    >>> is_prime(101)
    True
    >>> is_prime(11)
    True
    >>> is_prime(13441)
    True
    >>> is_prime(61)
    True
    >>> is_prime(4)
    False
    >>> is_prime(1)
    False
    """
