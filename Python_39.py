```
def prime_fib(n: int):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, (a + b)
    while True:
        if is_prime(b):
            return b
        a, b = b, (a + b)