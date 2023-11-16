

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
    def is_prime(num):
        if num == 1:
            return False
        for i in range(2, num):
            if num % i == 0:
                return False
        return True

    fib = [1, 1]
    for i in range(2, 1000):
        fib.append(fib[i - 1] + fib[i - 2])
        if is_prime(fib[i]):
            if n == 1:
                return fib[i]
            n -= 1


if __name__ == '__main__':
    import doctest

    doctest.testmod()
    """
