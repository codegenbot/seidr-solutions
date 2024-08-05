def prime_fib(n: int):
    def fibonacci(n):
        a, b = 0, 1
        for _ in range(n):
            a, b = b, a + b
        return a

    count = 0
    num = 2
    while count < n:
        if is_prime(num) and is_prime(fibonacci(num)):
            count += 1
        num += 1
    return fibonacci(num - 1)