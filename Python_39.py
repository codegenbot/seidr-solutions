```
def prime_fib(n: int):
    a, b = 2, 3
    count = 1
    while True:
        if b > n:
            return b
        if all(b % i for i in range(2, int(b ** 0.5) + 1)):
            count += 1
            if count == n:
                return b
        a, b = b, a + b