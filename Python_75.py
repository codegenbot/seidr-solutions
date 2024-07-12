```
def is_multiply_prime(a):
    def is_prime(x):
        if x < 2:
            return False
        for i in range(2, int(x**0.5) + 1):
            if x % i == 0:
                return False
        return True

    prime_factors = set()
    i = 2
    while i * i <= a:
        if a % i:
            i += 1
        else:
            a //= i
            prime_factors.add(i)
            while a % i == 0:
                a //= i
                prime_factors.add(i)
    if a > 1:
        prime_factors.add(a)

    return len(prime_factors) == 3