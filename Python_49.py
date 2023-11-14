

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
    # Calculate 2^n
    two_power = 2**n

    # Calculate 2^n mod p
    two_power_mod = two_power % p

    return two_power_mod


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
