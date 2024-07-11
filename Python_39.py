def prime_fib(n: int):
    a, b = 1, 1
    while True:
        if is_prime(b) and b <= n:
            return b
        a, b = b, a + b