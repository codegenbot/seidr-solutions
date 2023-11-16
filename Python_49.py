

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


def power(a: int, b: int, m: int):
    """Return a^b modulo m.
    >>> power(2, 3, 5)
    3
    >>> power(2, 1101, 101)
    2
    >>> power(2, 0, 101)
    1
    >>> power(2, 3, 11)
    8
    >>> power(2, 100, 101)
    1
    """


def inverse(a: int, m: int):
    """Return the inverse of a modulo m.
    >>> inverse(3, 5)
    2
    >>> inverse(2, 101)
    51
    >>> inverse(4, 11)
    3
    """
    """
