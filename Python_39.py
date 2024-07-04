def prime_fib(n: int):
    def is_prime(num):
        if num <= 1:
            return False
        if num <= 3:
            return True
        if num % 2 == 0 or num % 3 == 0:
            return False
        i = 5
        while i * i <= num:
            if num % i == 0 or num % (i + 2) == 0:
                return False
            i += 6
        return True

    fibs = [0, 1]
    primes = []
    i = 2
    while len(primes) < n:
        fibs.append(fibs[-1] + fibs[-2])
        if is_prime(fibs[-1]):
            primes.append(fibs[-1])
        i += 1
    return primes[n - 1]