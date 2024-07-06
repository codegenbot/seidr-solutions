
def prime_fib(n: int):
    fib = [0, 1]
    for i in range(2, n+1):
        fib.append(fib[i-1] + fib[i-2])
        if not is_prime(fib[-1]):
            fib.pop()
    return fib[n]
```