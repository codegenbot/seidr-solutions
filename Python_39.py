def prime_fib(n: int):
    def fibonacci(n):
        if n < 2:
            return n
        return fibonacci(n - 1) + fibonacci(n - 2)

    num = 2
    count = 0
    while count < n:
        if is_prime(num) and fibonacci(num) == num:
            count += 1
        num += 1
    return num - 1