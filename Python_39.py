

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
    i = 0
    j = 1
    count = 0
    while count < n:
        i, j = j, i + j
        if is_prime(j):
            count += 1
    return j


def is_prime(n: int) -> bool:
    """
    is_prime returns True if n is prime, otherwise returns False.
    """
    if n == 2:
        return True
    if n < 2 or n % 2 == 0:
        return False
    for i in range(3, n, 2):
        if n % i == 0:
            return False
    return True
    """
