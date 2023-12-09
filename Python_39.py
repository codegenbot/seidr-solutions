```
def prime_fib(n: int) -> int:
    fib = [2, 3]
    while len(fib) <= n:
        fib.append(6 * fib[-1] + 4 * fib[-2])
    return fib[n]
```