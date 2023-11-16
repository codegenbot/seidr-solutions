

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
    """
    Checks if n is a prime number.
    >>> is_prime(2)
    True
    >>> is_prime(3)
    True
    >>> is_prime(4)
    False
    >>> is_prime(13)
    True
    >>> is_prime(89)
    True
    """
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n ** 0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

    def fib(n):
    """
    Returns n-th Fibonacci number.
    >>> fib(0)
    0
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
    a, b = 0, 1
    for i in range(n):
        a, b = b, a + b
    return a

    i = 0
    current_number = 0
    while i < n:
        if is_prime(fib(current_number)):
            i += 1
        current_number += 1
    return fib(current_number - 1)
    """
