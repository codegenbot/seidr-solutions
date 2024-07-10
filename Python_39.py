import math

def prime_fib(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(math.sqrt(num)) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        fib_sequence = [0, 1]
        for i in range(2, n):
            fib_sequence.append(fib_sequence[i - 1] + fib_sequence[i - 2])
        return fib_sequence

    fibonacci_sequence = fibonacci(n)
    prime_fibonacci = [num for num in fibonacci_sequence if is_prime(num)]
    return prime_fibonacci