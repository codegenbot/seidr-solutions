def prime_fib(n: int):
    if n == 0:
        return 2
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    for num in fib[2:]:
        if is_prime(num):
            n -= 1
            if n == 0:
                return num