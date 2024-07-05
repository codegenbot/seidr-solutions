def prime_fib(n: int):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        fib.append((fib[i - 1] + fib[i - 2]) % 2)
        if (fib[i - 1] + fib[i - 2]) % 2 == 0:
            i += 1
        else:
            return -1
    return fib[n]