```
def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    a = b = 1
    result = 1
    counter = 0
    while True:
        a, b = b, a + b
        if is_prime(b):
            counter += 1
            if counter == n:
                return b