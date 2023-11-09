

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
    >>> prime_fib(6)
    233
    >>> prime_fib(7)
    1597
    >>> prime_fib(8)
    28657
    >>> prime_fib(9)
    514229
    >>> prime_fib(10)
    433494437
    """
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

    i = 1
    while i <= n:
        if prime(fib(i)):
            k = fib(i)
            i += 1
        else:
            i += 1
    return k


prime_fib(1)


    89
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

    i = 1
    while i <= n:
        if prime(fib(i)):
            k = fib(i)
            i += 1
        else:
            i += 1
    return k


prime_fib(1)
    """
