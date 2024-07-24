def prime_fib(n: int):
    if n == 0:
        return 0
    fib = [0, 1]
    while len(fib) <= n:
        fib.append(fib[-1] + fib[-2])
    for num in fib:
        if is_prime(num):
            n -= 1
            if n == 0:
                return num