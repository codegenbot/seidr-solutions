def prime_fib(n: int):
    a, b = 2, 3
    i = 1
    while i < n:
        if all(b % p for p in range(2, int(b ** 0.5) + 1)) and b > 1:
            a, b = b, a + b
            i += 1
    return b