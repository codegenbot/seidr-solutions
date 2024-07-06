def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        fib.append(fib[i - 1] + fib[i - 2])
        i += 1
    if not is_prime(fib[n]):
        return -1
    else:
        return fib[n]