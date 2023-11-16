

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
    >>> prime_fib(10)
    433494437
    89
    fibs = [2, 3, 5]
    if n == 1:
        return 2
    elif n == 2:
        return 3
    elif n == 3:
        return 5
    else:
        for i in range(3, n):
            fibs.append(fibs[-1] + fibs[-2])
            if fibs[-1] % 2 == 0:
                fibs.pop()
            else:
                for j in range(3, fibs[-1]):
                    if fibs[-1] % j == 0:
                        fibs.pop()
                        break
        return fibs[-1]


if __name__ == "__main__":
    import doctest
    fibs = [2, 3, 5]
    if n == 1:
        return 2
    elif n == 2:
        return 3
    elif n == 3:
        return 5
    else:
        for i in range(3, n):
            fibs.append(fibs[-1] + fibs[-2])
            if fibs[-1] % 2 == 0:
                fibs.pop()
            else:
                for j in range(3, fibs[-1]):
                    if fibs[-1] % j == 0:
                        fibs.pop()
                        break
        return fibs[-1]
    doctest.testmod(verbose=True)
    """
