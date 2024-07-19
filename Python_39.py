import math


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True


def prime_fib(n):
    a, b = 0, 1
    for _ in range(n):
        if is_prime(a):
            return a
        a, b = b, a + b


n = int(input("Enter a number: "))
print(prime_fib(n))