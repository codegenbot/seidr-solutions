import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    if n <= 0:
        return
    a, b = 1, 1
    count = 0
    while count < n:
        a, b = b, a + b
        if is_prime(b):
            print(b)
            count += 1

n = int(input())
prime_fib(n)