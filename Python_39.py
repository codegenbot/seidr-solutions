def is_prime(n: int) -> bool:
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def fib(n: int) -> int:
    if n == 1 or n == 2:
        return 1
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
    fib_number = 1
    prime_number = 1
    while prime_number < n:
        fib_number += 1
        if is_prime(fib(fib_number)):
            prime_number += 1
    return fib(fib_number)
    """
