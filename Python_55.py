

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    a, b = 0, 1
    for i in range(n):
        a, b = b, a + b
    return a
    21
    """
