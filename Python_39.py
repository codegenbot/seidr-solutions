```Python
def is_prime(n: int):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def prime_fib(n: int):
    a, b = 0, 1
    while True:
        if b >= n:
            return is_prime(b)
        b = a + b
        a = b