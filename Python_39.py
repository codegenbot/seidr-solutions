

def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


def prime(n):
    flag = 0
    if n == 1:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2, n):
            if n % i == 0:
                flag = 1
                return False
        if flag == 0:
            return True


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
    """
    fib_list = []
    for i in range(1, n + 1):
        fib_list.append(fib(i))
    primes = []
    for j in fib_list:
        if prime(j):
            primes.append(j)
    return primes[-1]


prime_fib(1)
    """
