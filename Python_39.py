def prime_fib(n: int) -> int:
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    return fib[n]

def sieve_of_eratosthenes(n):
    prime = [True for i in range(n+1)]
    p = 2
    while p * p <= n:
        if prime[p] == True:
            for i in range(p*2, n+1, p):
                prime[i] = False
        p += 1
    return [p for p in range(2, n+1) if prime[p]]

def prime_fibonacci(n):
    primes = sieve_of_eratosthenes(n)
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    return [fib[i] for i in range(len(fib)) if primes[i]]
```