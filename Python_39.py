def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n):
    a, b = 1, 1
    for _ in range(n):
        a, b = b, a + b
    return a if is_prime(a) else 0

n = int(input("Enter a number: "))
print(prime_fib(n))