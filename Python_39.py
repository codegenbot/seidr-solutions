

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

    a = 0
    b = 1
    fib = 1
    counter = 2
    while True:
        fib = a + b
        counter += 1
        if is_prime(fib):
            if counter == n:
                break
            else:
                counter += 1
        a = b
        b = fib
    return fib
    """
