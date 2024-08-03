```
def prime_fib(n: int):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, (a + b)
        if is_prime(b):
            return b

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True