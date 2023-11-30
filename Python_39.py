def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        if num == 2:
            return True
        for i in range(2, int(num**0.5) + 1):
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
            fib_seq = [0, 1]
            while len(fib_seq) < n:
                fib_seq.append(fib_seq[-1] + fib_seq[-2])
            return fib_seq[:n]

    fib_seq = fibonacci(n)
    prime_fib_seq = [num for num in fib_seq if is_prime(num)]
    return sum(prime_fib_seq) % (10**9 + 7)