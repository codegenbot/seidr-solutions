def prime_fib(n: int):
    fib = [0, 1]
    while n > 0:
        fib.append(fib[-1] + fib[-2])
        if is_prime(fib[-1]):
            n -= 1
    return fib[-1]