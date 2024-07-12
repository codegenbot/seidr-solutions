```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    primes = [i for i in range(2, a) if is_prime(i)]
    for p in primes:
        for q in primes:
            for r in primes:
                if p * q * r == a:
                    return True
    return False