

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    if n < 2:  # base case for boundary condition
        return n
    return fib(n-2) + fib(n-1)  # recursive call
    """
