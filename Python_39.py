def prime_fib(n: int):
    fib = []
    for i in range(100):
        if is_prime(i) and is_fibonacci(i):
            fib.append(i)
    return fib[n-1]