def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def is_fibonacci(num):
    if num < 0:
        return False
    return (5 * num * num + 4) ** 0.5 % 1 == 0 or (5 * num * num - 4) ** 0.5 % 1 == 0

def prime_fib(n):
    if is_prime(n) and is_fibonacci(n):
        return "Prime Fibonacci"
    elif is_prime(n):
        return "Prime"
    elif is_fibonacci(n):
        return "Fibonacci"
    else:
        return "Neither"

n = int(input())
print(prime_fib(n))