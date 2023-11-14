# This function is to compute 2^n modulo p (be aware of numerics).

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
    # Complete the following code given the task description and function signature.
    # Your code goes here.
    return 1

if __name__ == '__main__':
    import doctest
    doctest.testmod()
    """
