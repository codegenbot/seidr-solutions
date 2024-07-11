def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = [i for i in range(2, a+1) if a % i == 0]
    factors.sort()
    count = 0
    prime_count = 0
    for factor in factors:
        while a % factor == 0:
            a //= factor
            count += 1
            if is_prime(factor):
                prime_count += 1
            if prime_count == 3:
                return True
    return False