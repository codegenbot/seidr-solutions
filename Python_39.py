def prime_fib(n: int):
    fibonacci = []
    for i in range(2**31 - 1):
        if is_prime(i):
            fibonacci.append(i)
        if len(fibonacci) == n:
            return fibonacci[-1]