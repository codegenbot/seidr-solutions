def prime_fib(n: int):
    if n < 2:
        return []
    fib = [0, 1]
    for i in range(2, n + 1):
        fib.append(fib[i - 1] + fib[i - 2])
        if not is_prime(fib[i]):
            fib.pop()
    return fib[-1]