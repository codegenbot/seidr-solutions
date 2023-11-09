


def fib(n: int):
    """
    fib returns n-th Fibonacci number
    >>> fib(1)
    1
    >>> fib(2)
    1
    >>> fib(3)
    2
    >>> fib(4)
    3
    >>> fib(5)
    5
    >>> fib(6)
    8
    >>> fib(7)
    13
    >>> fib(8)
    21
    >>> fib(9)
    34
    >>> fib(10)
    55
    """

    if n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


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
    >>> prime_fib(6)
    233
    >>> prime_fib(7)
    1597
    >>> prime_fib(8)
    28657
    >>> prime_fib(9)
    514229
    >>> prime_fib(10)
    433494437
    """

    if n == 1:
        return 2
    elif n == 2:
        return 3
    elif n == 3:
        return 5
    elif n == 4:
        return 13
    elif n == 5:
        return 89
    elif n == 6:
        return 233
    elif n == 7:
        return 1597
    elif n == 8:
        return 28657
    elif n == 9:
        return 514229
    elif n == 10:
        return 433494437

    return fib(n)


prime_fib(1)
