

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
    if n == 0:
        return 1
    elif n == 1:
        return 2 % p
    else:
        if n % 2 == 0:
            return modp(n / 2, p) ** 2 % p
        else:
            return 2 * modp(n - 1, p) % p


def modp_iter(n: int, p: int):
    """Return 2^n modulo p (be aware of numerics).
    >>> modp_iter(3, 5)
    3
    >>> modp_iter(1101, 101)
    2
    >>> modp_iter(0, 101)
    1
    >>> modp_iter(3, 11)
    8
    >>> modp_iter(100, 101)
    1
    """
    if n == 0:
        return 1
    else:
        result = 1
        for i in range(n):
            result = 2 * result % p
        return result
    """
