
def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        fib.append((fib[i-2] + fib[i-1]) % 2)
        i += 1
    return fib[n]