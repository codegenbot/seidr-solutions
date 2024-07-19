import sys
import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    count = 0
    a, b = 0, 1
    while count < n:
        if is_prime(a):
            count += 1
        a, b = b, a + b
    return a

n = int(sys.argv[1])
print(prime_fib(n))