def prime_fib(n: int):
    def fibonacci(num):
        if num == 0:
            return 0
        elif num == 1:
            return 1
        else:
            return fibonacci(num - 1) + fibonacci(num - 2)

    count = 0
    i = 0
    while count < n:
        if is_prime(fibonacci(i)):
            count += 1
        i += 1
    return fibonacci(i - 1)

prime_fib(n)