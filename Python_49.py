

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


def modp_inv(n: int, p: int):
    """Return the inverse of n modulo p.
    >>> modp_inv(3, 5)
    2
    >>> modp_inv(1101, 101)
    99
    >>> modp_inv(0, 101)
    0
    >>> modp_inv(3, 11)
    4
    >>> modp_inv(100, 101)
    100
    """
    """
