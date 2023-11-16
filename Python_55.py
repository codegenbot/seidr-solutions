

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(1)
    1
    >>> fib(8)
    21
    if n <= 1:
    >>> fib(10)
    55
        return n
    return fib(n - 1) + fib(n - 2)
    if n <= 1:
        return n
    """
