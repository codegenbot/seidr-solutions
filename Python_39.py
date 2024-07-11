def prime_fib(n: int):
    if n < 2:
        return 1
    a, b = 1, 1
    while True:
        if is_prime(b):
            return b
        a, b = b, a + b
        if b > n:
            break