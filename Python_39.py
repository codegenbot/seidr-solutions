def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    fib_sequence = [2, 3]  # Initialize the first two Fibonacci numbers
    while len(fib_sequence) < n:
        next_fib = fib_sequence[-1] + fib_sequence[-2]
        if is_prime(next_fib):
            fib_sequence.append(next_fib)

    return fib_sequence[n-1]