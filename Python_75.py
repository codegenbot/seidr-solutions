def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    prime_factors = set()
    i = 2
    while a > 1:
        if a % i:
            i += 1
        else:
            a //= i
            prime_factors.add(i)
            if len(prime_factors) >= 3:
                break
    return all(is_prime(i) for i in prime_factors)