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
        elif n == 1:
            return [0]
        elif n == 2:
            return [0, 1]
        else:
            fib_sequence = [0, 1]
            for i in range(2, n):
                fib_sequence.append(fib_sequence[i-1] + fib_sequence[i-2])
            return fib_sequence

    fib_sequence = fibonacci(n)
    prime_fib_nums = [num for num in fib_sequence if is_prime(num)]
    return prime_fib_nums[-1]