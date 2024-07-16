def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def is_fibonacci(num):
        return (5 * num * num + 4) ** 0.5 % 1 == 0 or (5 * num * num - 4) ** 0.5 % 1 == 0

    return "Prime Fibonacci" if is_prime(n) and is_fibonacci(n) else "Not Prime Fibonacci"

try:
    n = int(input("Enter an integer: "))
    print(prime_fib(n))
except ValueError:
    print("Please enter a valid integer.")