def prime_fib(n: int):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    count = 2
    num = 1
    while count < n:
        num += 1
        if is_prime(num):
            if num == fibonacci(count - 1):
                count += 1
    return num