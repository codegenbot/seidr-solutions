```
def prime_fib(n: int):
    a, b = 0, 1
    count = 0
    while True:
        a, b = b, (a + b)
        if is_prime(b):
            count += 1
            if count == n:
                return b