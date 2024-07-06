def prime_fib(n):
    fib = [0, 1]
    i = 2
    while len(fib) < n:
        fib.append(fib[i - 1] + fib[i - 2])
        i += 1

    if fib[-1] in [0, 1]:
        return None

    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return fib[-1]

    return None