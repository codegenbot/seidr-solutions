def prime_fib(n: int):
    fib_num = 0
    a, b = 1, 2
    count = 1
    while True:
        if b > n:
            return a
        fib_num += 1
        if fib_num % 2 == 0 and not is_prime(b):
            b += 1
            continue
        a, b = b, a + b