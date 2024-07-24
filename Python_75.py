```
def find_prime_factors(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = []
    while a > 1:
        for i in range(2, a+1):
            if a % i == 0:
                is_prime_i = is_prime(i)
                if is_prime_i:
                    a //= i
                    factors.append(i)
                    break
    return factors