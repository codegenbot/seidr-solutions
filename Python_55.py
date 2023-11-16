

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    >>> fib(20)
    6765
    return fib(n - 1) + fib(n - 2)
    """
