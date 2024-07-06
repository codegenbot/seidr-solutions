```
def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = []
    i = 2
    while a > 1:
        if a % i:
            i += 1
        else:
            a //= i
            factors.append(i)
    primes_in_factors = [f for f in factors if is_prime(f)]
    return len(primes_in_factors) == 3