def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    primes = [i for i in range(2, a) if is_prime(i)]
    for i in range(len(primes)):
        for j in range(i + 1, len(primes)):
            if a % (primes[i] * primes[j]) == 0:
                third_prime = [k for k in primes if a // (primes[i] * primes[j]) == k]
                return True
    return False