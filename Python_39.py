def is_prime(n: int):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def prime_fib(n: int):
    a, b = 0, 1
    count = 0
    while True:
        if is_prime(b):
            count += 1
            if count == n:
                return b
        a, b = b, a + b