def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    primes = [i for i in range(2, a+1) if is_prime(i)]
    for p in primes:
        if a % p == 0 and len([q for q in primes if q * p <= a]) >= 2:
            return True
    return False