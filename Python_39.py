import math

def is_prime(num):
    if num <= 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    max_divisor = math.isqrt(num) + 1
    for i in range(3, max_divisor, 2):
        if num % i == 0:
            return False
    return True

def prime_fib():
    n = int(input())

    def fibonacci(n):
        if n <= 0:
            return 0
        if n == 1:
            return 1
        a, b = 0, 1
        for _ in range(2, n):
            a, b = b, a + b
        return b

    count = 0
    num = 1
    while count < n:
        num += 1
        if is_prime(num) and num == fibonacci(num):
            count += 1
    return num

print(prime_fib())