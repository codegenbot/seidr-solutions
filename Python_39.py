def prime_fib(n: int) -> int:
    a, b = 1, 1
    while True:
        if b >= n:
            return b
        if is_prime(b):
            a, b = b, a + b
        else:
            b += 1