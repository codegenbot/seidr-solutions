```
def prime_fib(n: int):
    a, b = 2, 3
    count = 1
    while True:
        if is_prime(b):
            if count == n:
                return b
            count += 1
        a, b = b, a + b

def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True