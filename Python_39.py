def prime_fib(n: int):
    a, b = 1, 1
    for _ in range(n):
        if is_prime(a):
            return a
        a, b = b, a + b
    return None