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
    divisor = a
    while divisor > 1:
        for i in range(2, int(divisor ** 0.5) + 1):
            if divisor % i == 0:
                if is_prime(i):
                    prime_factors.add(i)
                while divisor % i == 0:
                    divisor //= i
                break
    return len(prime_factors) >= 3