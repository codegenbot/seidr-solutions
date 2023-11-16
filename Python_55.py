

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    if n == 0 or n == 1:
        return n
    return fib(n - 1) + fib(n - 2)
    21
    """
