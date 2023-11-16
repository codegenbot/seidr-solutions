

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
    >>> fib(1)
    1
    >>> fib(8)
    21
    """
        return fib(n-1) + fib(n-2)


if __name__ == '__main__':
    import doctest
    doctest.testmod()
