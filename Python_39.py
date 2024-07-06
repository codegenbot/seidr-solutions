
def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        if fib[i - 1] % fib[i - 2] != 0:
            fib.append(fib[i - 1] + fib[i - 2])
            i += 1
        else:
            i += 1
    return fib[-1]