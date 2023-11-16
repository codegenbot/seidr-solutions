

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
    fib_numbers = [2]
    a, b = 1, 2
    while len(fib_numbers) < n:
        a, b = b, a + b
        if is_prime(b):
            fib_numbers.append(b)
    return fib_numbers[-1]


def is_prime(n: int) -> bool:
    """
    is_prime returns True if n is prime, otherwise returns False.
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
    """
    if n == 2:
        return True
    if n % 2 == 0 or n <= 1:
        return False
    sqr = int(n ** 0.5) + 1
    for divisor in range(3, sqr, 2):
        if n % divisor == 0:
            return False
    return True

    """
