

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
    fib_list = [2, 3]
    i = 2
    while i < n:
        fib_list.append(fib_list[i - 1] + fib_list[i - 2])
        i += 1
    return fib_list[n - 1]
    """
