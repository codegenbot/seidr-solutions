

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
        return fib(n-1) + fib(n-2)

    def fib_efficient(n: int, d: dict) -> int:
        """Return the nth fibonacci number, using a dictionary to maintain the cache.
        >>> fib_efficient(5, {})
        5
        >>> fib_efficient(15, {})
        610
        >>> fib_efficient(50, {})
        12586269025
        """

        if n <= 1:
            return n

        # check cache
        if n in d:
            return d[n]

        result = fib_efficient(n-1, d) + fib_efficient(n-2, d)
        # cache the result
        d[n] = result
        return result

    if __name__ == "__main__":
        import doctest
        doctest.testmod()
    """
