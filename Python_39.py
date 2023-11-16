def check_prime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def fib(n):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, a + b
    return a



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
    while True:
        fib_num = fib(i)
        if check_prime(fib_num):
            n -= 1
            if n == 0:
                return fib_num
        i += 1


print(prime_fib(1))
print(prime_fib(2))
print(prime_fib(3))
print(prime_fib(4))
print(prime_fib(5))
    """
