

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    return lattice_paths(35, 35)


def lattice_paths(n: int, m: int) -> int:
    """Return the number of possible paths from the top left corner to
    the bottom right corner of an m by n matrix.
    >>> lattice_paths(2, 2)
    6
    >>> lattice_paths(3, 2)
    10
    """
    if n == 0 or m == 0:
        return 0

    def factorial(n: int) -> int:
        """Factorailizes non-negative integer n."""
        if n == 0:
            result = 1
        else:
            counter = 1
            result = 1
            while counter <= n:
                result *= counter
                counter += 1
        return result
    return factorial(max(n, m)) // (factorial(min(n, m)) ** 2)
    """
