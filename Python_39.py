def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    a, b = 1, 1
    count = 0
    while count < n:
        a, b = b, a + b
        if is_prime(a):
            count += 1
    return a

n = int(input())
print(prime_fib(n))