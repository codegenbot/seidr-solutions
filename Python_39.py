
def is_prime(n: int) -> bool:
    """
    is_prime returns True if n is prime, False otherwise.
    >>> is_prime(2)
    True
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(5)
    True
    >>> is_prime(6)
    False
    >>> is_prime(7)
    True
    >>> is_prime(8)
    False
    >>> is_prime(9)
    False
    >>> is_prime(10)
    False
    >>> is_prime(11)
    True
    """

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
    def fib(n: int) -> int:
        """
        fib returns n-th Fibonacci number.
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
        return fib(n-1) + fib(n-2)

    i = 1
    while True:
        num = fib(i)
        if is_prime(num):
            n -= 1
            if n == 0:
                return num
        i += 1


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    """
