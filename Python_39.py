import math

def prime_fib(n):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    return fib[n]

def is_prime(n):
    if n < 2 or (math.isqrt(n) ** 2) != n:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def check(n):
    assert is_prime(prime_fib(n))