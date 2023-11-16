

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(12)
    144
    >>> fib(5)
    5
    >>> fib(9)
    34

    if n == 1 or n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)
    """
