
from math import sqrt


def is_prime(n):
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


def prime_fib(n: int):
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


def check(f):
    assert f(1) == 2
    assert f(2) == 3
    assert f(3) == 5
    assert f(4) == 13
    assert f(5) == 89
    assert f(10) == 433494437


if __name__ == '__main__':
    check(prime_fib)
