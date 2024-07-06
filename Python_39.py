def prime_fib(n):
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])

    # Check if the result is prime or not
    return fib[n] if fib[n] % 2 != 0 else False