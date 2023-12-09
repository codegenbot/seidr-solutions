```
def prime_fib(n: int) -> int:
    fib = [0, 1]
    while len(fib) <= n:
        curr_num = fib[-1] + fib[-2]
        if is_prime(curr_num):
            fib.append(curr_num)
    return fib[n]
```