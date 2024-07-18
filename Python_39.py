def prime_fib(n: int):
    def fibonacci():
        a, b = 1, 1
        for _ in range(n):
            yield a
            a, b = b, a + b

    fib_gen = fibonacci()
    result = None
    try:
        while n > 0:
            num = next(fib_gen)
            if is_prime(num):
                result = num
                n -= 1
    except StopIteration:
        pass
    return result