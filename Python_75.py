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
    for i in range(2, a+1):
        while a % i == 0:
            prime_factors.add(i)
            a //= i
    return len(prime_factors) >= 3 and all(is_prime(i) for i in prime_factors)