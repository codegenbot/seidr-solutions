def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = [i for i in range(2, a) if a % i == 0]
    prime_factors = [factor for factor in factors if is_prime(factor)]
    return len(prime_factors) >= 3