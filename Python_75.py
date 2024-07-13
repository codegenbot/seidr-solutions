```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    primes = [i for i in range(2, a+1) if is_prime(i)]
    for prime in primes:
        if a % prime == 0 and len([p for p in primes if a // prime == p]) >= 2:
            return True
    return False