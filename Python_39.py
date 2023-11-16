

def prime_fib(n: int):
    """
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    >>> prime_fib(1)
    2
    >>> prime_fib(2)
    3
    >>> prime_fib(3)
    5
    >>> prime_fib(4)
    13
    >>> prime_fib(5)
    89
    if n <= 0:
        return 0
    if n == 1:
        return 2
    else:
        i = 1
        j = 1
        f = 2
        while n > 0:
            i = j
            j = f
            f = i + j
            if f % 2 != 0:
                n -= 1
        return f
    """
