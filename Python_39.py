def prime_fib(n, m):
    fib_sequence = [0, 1]
    while len(fib_sequence) <= n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def sum_prime_fib(fib_sequence, m):
        return sum(num for num in fib_sequence if num <= m and is_prime(num))

    return sum_prime_fib(fib_sequence, m)