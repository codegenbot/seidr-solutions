

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    n = 1
    previous = 0
    current = 1
    for _ in range (1, n):
        n = current + previous
        previous = current
        current = n
    return n
    21
    """
