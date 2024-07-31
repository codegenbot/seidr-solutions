def prime_fib(n: int):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, (a + b) % 2 + a
    for i in range(b << 1, 1000000):
        is_prime = all(i % j for j in range(2, int(i**0.5) + 1))
        if is_prime:
            return i