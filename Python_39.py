def prime_fib(n: int) -> bool:
    def is_prime(num: int) -> bool:
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(num: int) -> int:
        a, b = 0, 1
        for _ in range(num):
            a, b = b, a + b
        return a

    return is_prime(fibonacci(n))

n = int(input())
print(prime_fib(n))