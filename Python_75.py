```
def is_multiply_prime(a):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    prime_factors = set()
    for i in range(2, a+1):
        while a % i == 0:
            if is_prime(i):
                prime_factors.add(i)
            a //= i
    return len(prime_factors) >= 3