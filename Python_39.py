def prime_fib(n: int):
    fib = []
    for i in range(100):
        if is_prime(i) and is_fibonacci(i):
            fib.append(i)
    return fib[n-1]

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def is_fibonacci(n):
    a, b = 0, 1
    while n > 0:
        a, b = b, a + b
        n -= 1
    return a == 0