def prime_fib(n):
    if n <= 0:
        return None
    fib = [0, 1]
    i = 2
    while len(fib) < n:
        fib.append(fib[i - 1] + fib[i - 2])
        i += 1
    if is_prime(fib[-1]):
        return fib[-1]
    else:
        return None