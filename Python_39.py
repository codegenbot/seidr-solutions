def prime_fib(n: int):
    a, b = 0, 1
    primes = []
    while len(primes) < n:
        if b > 1000000:  # stop when Fibonacci number exceeds 10^6
            break
        if is_prime(b):
            primes.append(b)
        a, b = b, a + b
    return primes[-1]