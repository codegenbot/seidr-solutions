def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fibonacci():
        a, b = 1, 1
        for _ in range(n):
            yield a
            a, b = b, a + b

    fib_gen = fibonacci()
    result = None
    while n > 0:
        num = next(fib_gen)
        if is_prime(num):
            result = num
            n -= 1
    return result