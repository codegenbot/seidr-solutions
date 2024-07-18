import math
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def is_fibonacci(num):
    return math.isqrt(5 * num * num + 4) ** 2 == 5 * num * num + 4 or math.isqrt(5 * num * num - 4) ** 2 == 5 * num * num - 4

def prime_fib(n):
    count = 0
    num = 1
    while count < n:
        if is_prime(num) and is_fibonacci(num):
            count += 1
        num += 1
    return num - 1

n = int(input())
print(prime_fib(n))