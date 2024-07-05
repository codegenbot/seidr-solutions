import math


def prime_fib(n):
    fib = [0, 1]
    for i in range(2, n + 1):
        next_fib = (fib[i - 1] + fib[i - 2]) % 2
        if math.gcd(next_fib, 2) == 1 and i < len(fib):
            fib.append(next_fib)
    return fib[n]