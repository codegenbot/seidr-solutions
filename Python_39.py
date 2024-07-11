def prime_fib(n: int):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    for i in range(len(fib)):
        if all(fib[i] % d > 0 for d in range(2, int(fib[i] ** 0.5) + 1)):
            return fib[i]