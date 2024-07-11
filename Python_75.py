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
    prime_factors = [f for f in factors if is_prime(f)]
    
    return len(prime_factors) >= 3