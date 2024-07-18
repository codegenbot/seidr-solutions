def prime_fib(n: int):
    def fibonacci():
        a, b = 1, 1
        for _ in range(n):
            yield a
            a, b = b, a + b

    fib_gen = fibonacci()
    result = None
    try:
        for _ in range(n):
            num = next(fib_gen)
            if is_prime(num):
                result = num
    except StopIteration:
        pass

    return result