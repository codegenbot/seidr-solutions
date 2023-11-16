

def prime_fib(n):
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
    fib_number = [0, 1, 1]
    fib_prime_number = [2]
    i = 3
    while len(fib_prime_number) < n:
        fib_number.append(fib_number[i - 1] + fib_number[i - 2])
        for j in range(2, fib_number[i]):
            if fib_number[i] % j == 0:
                break
        else:
            fib_prime_number.append(fib_number[i])
        i += 1
    return fib_prime_number[-1]


if __name__ == "__main__":
    import doctest
    doctest.testmod()
    print(prime_fib(100))
    """
