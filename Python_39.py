def prime_fib(n: int):
    fib = [0, 1]
    i = 2
    while len(fib) < n:
        fib.append(fib[i - 2] + fib[i - 1])
        if fib[-1] % 2 == 0 and fib[-1] != 2:
            fib.pop()
        i += 1
    return fib[-1]