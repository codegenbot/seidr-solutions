

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21

    if n <= 1:
        return n
    else: 
        n_1 = fib(n-1)
        n_2 = fib(n-2)
        return n_1 + n_2
    """
