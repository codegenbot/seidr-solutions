def prime_fib(n: int):
    def is_prime(num):
        if num <= 1:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    fibs = [0, 1]
    primes = []
    a, b = 0, 1
    while len(primes) < n:
        a, b = b, a + b
        if is_prime(b):
            primes.append(b)
    return primes[n - 1]