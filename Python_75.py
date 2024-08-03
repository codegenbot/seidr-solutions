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
    for p in range(2, a+1):
        while a % p == 0:
            factors.append(p)
            a //= p
    if a > 1:
        factors.append(a)

    return len(factors) == 3 and all(is_prime(f) for f in set(factors))