def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    factors = [i for i in range(2, a+1) if a % i == 0]
    for factor in factors:
        if is_prime(factor):
            prime_factors = [i for i in factors if is_prime(i)]
            if len(prime_factors) >= 3 and all([a // (factor * p) < 100 for p in prime_factors]):
                return True
    return False