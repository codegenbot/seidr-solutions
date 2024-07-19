def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fib(n):
        if n <= 1:
            return n
        return fib(n - 1) + fib(n - 2)

    i = 2
    num = 1
    while n > 0:
        num += 1
        if is_prime(num) and num == fib(i):
            n -= 1
        i += 1

    return num