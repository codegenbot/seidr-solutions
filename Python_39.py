def prime_fib(n: int):
    fib_num = 0
    a, b = 0, 1
    count = 0
    while True:
        fib_num += 1
        if b > n:
            return a
        a, b = b, a + b