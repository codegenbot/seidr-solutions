def prime_fib(n: int):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    count = 0
    num = 2
    while count < n:
        num += 1
        if is_prime(num) and num == fibonacci(num):
            count += 1
    return num