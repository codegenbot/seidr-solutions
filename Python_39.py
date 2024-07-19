def prime_fib(n: int):
    if n == 1:
        return 2
    if n == 2:
        return 3
    count = 3
    a, b = 1, 1
    while count < n:
        a, b = b, a + b
        if is_prime(b):
            count += 1
    return b