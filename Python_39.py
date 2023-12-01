def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        if n <= 0:
            return []
        fib = [0, 1]
        while fib[-1] <= n:
            fib.append(fib[-1] + fib[-2])
        return fib

    fib_numbers = fibonacci(n)
    prime_fib_numbers = [num for num in fib_numbers if is_prime(num)]
    return prime_fib_numbers[-1]