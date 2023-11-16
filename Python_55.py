

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21


class Fibonacci:
    """Iterator over Fibonacci numbers."""
    def __init__(self, n: int):
        """Capture the number of iterations needed to calculate.

        >>> f = Fibonacci(5)
        >>> list(f)
        [1, 1, 2, 3, 5]
        """

    def __next__(self):
        """Next value, after 0.

        >>> f = Fibonacci(5)
        >>> f.__next__()
        1
        >>> f.__next__()
        1
        """

    def __iter__(self):
        """Support `for ... in`.

        >>> f = Fibonacci(5)
        >>> next(f)
        1
        """
    """
