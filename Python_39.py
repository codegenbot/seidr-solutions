def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        next_fib = (fib[i - 1] + fib[i - 2]) % 2 if i < len(fib) else fib[-1] + fib[-2]
        if math.gcd(next_fib, 2) == 1 and i < len(fib):
            fib.append(next_fib)
        i += 1
    return fib[n]