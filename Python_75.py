```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    prime_factors = set()
    for p in range(2, a+1):
        while a % p == 0:
            prime_factors.add(p)
            a //= p
    return len(prime_factors) == 3