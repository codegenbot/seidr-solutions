```
def is_multiply_prime():
    a = int(input("Enter a number: "))
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = []
    while a > 1:
        for i in range(2, int(a**0.5) + 1):
            if a % i == 0:
                a //= i
                factors.append(i)
                break
    prime_factors = [f for f in set(factors) if is_prime(f)]
    return len(prime_factors) >= 3