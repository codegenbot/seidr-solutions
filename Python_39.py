```
def prime_fib(n: int):
    a, b = 1, 1
    while True:
        if b >= n:
            return b
        if is_prime(b):
            return b
        a, b = b, a + b


def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True