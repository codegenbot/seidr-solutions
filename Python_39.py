```
def prime_fib(n: int):
    a, b = 2, 3
    if n == 1:
        return 2
    for _ in range(2, n):
        a, b = b, a + b
        while not is_prime(b):
            a, b = b, a + b
    return b

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True