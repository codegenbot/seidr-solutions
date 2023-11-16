

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

    fib_n = 2
    fib_n_minus_1 = 1
    fib_n_minus_2 = 0
    fib_prime_count = 0

    while fib_prime_count < n:
        fib_n = fib_n_minus_1 + fib_n_minus_2
        fib_n_minus_2 = fib_n_minus_1
        fib_n_minus_1 = fib_n

        if is_prime(fib_n):
            fib_prime_count += 1

    return fib_n


def is_prime(n: int):
    """
    is_prime returns True if n is a prime number, else it returns False.
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
    >>> is_prime(12)
    False
    >>> is_prime(13)
    True
    >>> is_prime(14)
    False
    >>> is_prime(15)
    False
    >>> is_prime(16)
    False
    >>> is_prime(17)
    True
    >>> is_prime(18)
    False
    >>> is_prime(19)
    True
    >>> is_prime(20)
    False
    """

    if n < 2:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False

    return True

    """
