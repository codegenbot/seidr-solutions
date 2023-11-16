

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
    i = 1
    while n > 0:
        if is_prime(fib(i)):
            n -= 1
        i += 1
    return fib(i - 1)


def fib(n: int):
    """
    fib returns the n-th Fibonacci number.
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
    """
    if n == 1 or n == 2:
        return 1
    return fib(n - 1) + fib(n - 2)


def is_prime(n: int):
    """
    is_prime checks if a given number is a prime number.
    >>> is_prime(1)
    False
    >>> is_prime(2)
    True
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(5)
    True
    """
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


if __name__ == '__main__':
    import doctest

    doctest.testmod()
    """
