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
    i = 0
    while count < n:
        i += 1
        fib_num = fibonacci(i)
        if is_prime(fib_num):
            count += 1

    return fib_num