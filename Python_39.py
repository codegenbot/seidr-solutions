
def prime_fib(n: int):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        fib.append((fib[i-1] + fib[i-2]) % 2)
        i += 1
    return fib[-1]