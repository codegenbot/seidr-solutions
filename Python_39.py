def prime_fib(n: int):
    a, b = 0, 1
    while True:
        if b >= n:
            return is_prime(b)
        b = a + b
        a = b