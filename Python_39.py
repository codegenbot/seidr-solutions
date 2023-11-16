

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
    1597
    >>> prime_fib(7)
    28657
    >>> prime_fib(8)
    514229
    >>> prime_fib(9)
    433494437
    >>> prime_fib(10)
    2971215073
    89
    fibonacci = [0, 1, 2]
    while len(fibonacci) <= n:
        fibonacci.append(fibonacci[-1] + fibonacci[-2])
    return fibonacci[n]
    """
