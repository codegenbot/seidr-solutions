def prime_fib(n: int):
    a, b = 1, 2
    i = 0
    while True:
        if b >= n:
            return b
        c = a + b
        a, b = b, c
        i += 1
        if is_prime(c):
            if i == n - 1:
                return c