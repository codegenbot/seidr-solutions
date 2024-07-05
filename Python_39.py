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

    while len(primes) < n:
        next_fib = fibs[-1] + fibs[-2]
        fibs.append(next_fib)
        if is_prime(next_fib):
            primes.append(next_fib)

    return primes[n - 1]