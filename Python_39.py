def prime_fib(n):
    if n <= 0:
        return None
    a, b = 1, 1
    count = 0
    while count < n:
        a, b = b, a + b
        if is_prime(a):
            count += 1
    return a