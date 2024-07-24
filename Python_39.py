def prime_fib(n: int):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    primes = [x for x in fib if is_prime(x)]
    return primes[n - 1]