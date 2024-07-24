```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    def find_prime_factors(a):
        factors = []
        for i in range(2, a+1):
            while a % i == 0:
                factors.append(i)
                a //= i
        return [f for f in set(factors) if is_prime(f)]

    prime_factors = find_prime_factors(a)
    return len(prime_factors) == 3