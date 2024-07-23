def prime_fib(n: int):
    if n < 1:
        return None
    a, b = 0, 1
    count = 0
    while True:
        if is_prime(b):
            count += 1
            if count == n:
                return b
        a, b = b, a + b