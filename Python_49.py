

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


def main():
    """Read a number n and a prime p from the command line and
    print 2^n modulo p.
    """
    import sys
    n = int(sys.argv[1])
    p = int(sys.argv[2])
    print(modp(n, p))


if __name__ == '__main__':
    main()
    """
