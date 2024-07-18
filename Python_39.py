import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    if n <= 1:
        return 0
    elif n == 2:
        return 1

    a, b = 0, 1
    for _ in range(n - 2):
        a, b = b, a + b

    return 1 if is_prime(b) else 0

n = int(input())
print(prime_fib(n))