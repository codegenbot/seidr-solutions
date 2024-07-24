```
def find_prime_factors(n: int) -> List[int]:
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            if is_prime(i):
                factors.append(i)
            n //= i
    return factors

def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, math.isqrt(num) + 1):
        if num % i == 0:
            return False
    return True