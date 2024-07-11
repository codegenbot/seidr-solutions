```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = [i for i in range(2, a+1) if a % i == 0]
    for f in factors:
        if is_prime(f):
            prime_factors = [g for g in factors if is_prime(g)]
            if len(prime_factors) >= 3 and all([a // (f * g * h) == 1 for g, h in zip(prime_factors[1:], prime_factors[2:])]):
                return True
    return False