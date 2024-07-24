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
        while a % i == 0:
            factors.append(i)
            a //= i
        i += 1
    primes = [x for x in set(factors) if is_prime(x)]
    return len(primes) == 3