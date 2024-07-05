def prime_fib(n: int):
    def is_prime(x):
        if x < 2:
            return False
        for i in range(2, int(x**0.5) + 1):
            if x % i == 0:
                return False
        return True

    def fibonacci():
        a, b = 0, 1
        while True:
            a, b = b, a + b
            yield a

    fib_gen = fibonacci()
    count = 0
    while True:
        fib_num = next(fib_gen)
        if is_prime(fib_num):
            count += 1
            if count == n:
                return fib_num