
def prime_fib(n: int):
    fib = [0, 1]
    i = 2
    while len(fib) <= n:
        next_fib = (fib[i-1] + fib[i-2]) % 2
        if next_fib == 0:
            fib.append(next_fib)
        else:
            i += 1
    return fib[n]