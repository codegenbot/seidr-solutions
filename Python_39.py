import math


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

    def is_prime(n):
        for i in range(2, math.ceil(math.sqrt(n))):
            if n % i == 0:
                return False
        return True

    a, b, count = 2, 3, 0
    while count < n:
        if is_prime(b):
            count += 1
        a, b = b, a + b
    return a


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    """
