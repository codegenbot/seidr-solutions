def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    if n == 1:
        return 2
    if n == 2:
        return 3
    count = 2
    fib1, fib2 = 2, 3
    while count < n:
        fib1, fib2 = fib2, fib1 + fib2
        if is_prime(fib2):
            count += 1
    return fib2