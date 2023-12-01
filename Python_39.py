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
        fib_sequence = [0, 1]
        while len(fib_sequence) < n:
            fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
        return fib_sequence

    fib_sequence = fibonacci(n)
    prime_fib_numbers = []
    for num in fib_sequence:
        if is_prime(num):
            prime_fib_numbers.append(num)
    return prime_fib_numbers[-1]