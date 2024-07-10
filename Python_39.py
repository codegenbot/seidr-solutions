def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        if n <= 0:
            return 0
        if n == 1:
            return 1
        a, b = 0, 1
        for _ in range(2, n):
            a, b = b, a + b
        return b

    i = 0
    while n > 0:
        i += 1
        if is_prime(fibonacci(i)):
            n -= 1
    return fibonacci(i)