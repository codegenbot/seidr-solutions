def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(num):
        if num <= 0:
            return 0
        elif num == 1:
            return 1
        else:
            a, b = 0, 1
            for _ in range(num - 1):
                a, b = b, a + b
            return a

    count = 0
    num = 2
    while True:
        if is_prime(fibonacci(num)):
            count += 1
            if count == n:
                return fibonacci(num)
        num += 1