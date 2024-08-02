from math import sqrt

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def fib(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

def prime_fib(n):
    prime_fib_numbers = [num for num in fib(10000) if is_prime(num)]
    return prime_fib_numbers[:n]