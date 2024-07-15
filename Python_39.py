def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(num):
        a, b = 0, 1
        for _ in range(num):
            yield a
            a, b = b, a + b

    fibonacci_gen = fibonacci(n)
    prime_fib_list = [num for num in fibonacci_gen if is_prime(num)]

    return prime_fib_list

try:
    n = int(input())
    print(prime_fib(n))
except ValueError:
    print("Invalid input. Please enter a valid integer.")