

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(1)
    1
    >>> fib(8)
    if n <= 1:
        return n
    21
    >>> fib(10)
    55
    return fib(n - 1) + fib(n - 2)
    """
