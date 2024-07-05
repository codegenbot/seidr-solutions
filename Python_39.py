def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        phi = (1 + sqrt(5)) / 2
        fib.append((phi**i) % 2)
        if (phi**i) % 2 == 0:
            i += 1
    return fib[n]