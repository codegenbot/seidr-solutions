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
        if n < 0:
            return []
        elif n <= 1:
            return [n]

        fib_seq = [0, 1]
        while len(fib_seq) <= n:
            fib_seq.append(fib_seq[-1] + fib_seq[-2])
        return fib_seq[-1]

    return sum([fibonacci(i) for i in range(n+1) if is_prime(fibonacci(i))]) % (10**9 + 7)