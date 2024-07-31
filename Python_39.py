```
def prime_fib(n: int):
    a, b = 2, 1
    i = 0
    while True:
        if b > n:
            return a
        if is_prime(b):
            i += 1
            if i == n:
                return b
        a, b = b, a + b

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True