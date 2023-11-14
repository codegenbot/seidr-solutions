

def modp(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics).
    >>> modp(3, 5)
    3
    >>> modp(1101, 101)
    2
    >>> modp(0, 101)
    1
    >>> modp(3, 11)
    8
    >>> modp(100, 101)
    1


def check(n: int, p: int):
    """Return True if n is prime, False otherwise.
    >>> check(3, 5)
    True
    >>> check(1101, 101)
    False
    >>> check(5, 11)
    True
    >>> check(100, 101)
    False
    """


def find(n: int, p: int):
    """Return a prime number that is not equal to n.
    >>> find(3, 5)
    2
    >>> find(1101, 101)
    2
    >>> find(5, 11)
    2
    >>> find(100, 101)
    2
    """
    """
