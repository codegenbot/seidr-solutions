

def modp(n, p):
    """Return 2^n modulo p (be aware of numerics). The input is guaranteed to be non-negative.
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
    """
