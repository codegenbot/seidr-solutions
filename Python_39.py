def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        a, b = 0, 1
        for _ in range(n):
            yield a
            a, b = b, a + b

    fib_sequence = list(fibonacci(n))
    prime_fib_list = [num for num in fib_sequence if is_prime(num)]
    return prime_fib_list

result = prime_fib(int(input().strip()))