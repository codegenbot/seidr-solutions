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
        elif n == 1:
            return 0
        elif n == 2:
            return 1
        else:
            a, b = 0, 1
            for _ in range(n - 2):
                a, b = b, a + b
            return b

    fib_num = fibonacci(n)
    if is_prime(fib_num):
        return fib_num
    else:
        return 0