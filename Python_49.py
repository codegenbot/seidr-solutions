import math


def modp(n: int, p: int) -> object:
    if math.gcd(n, p) != 1:
        return None

    def is_prime(k):
        if k < 2:
            return False
        for i in range(2, int(math.sqrt(k)) + 1):
            if k % i == 0:
                return False
        return True

    if not is_prime(p):
        return None
    result = pow(n, (p - 1) // 2, p)
    if result * n % p == 1:
        return result
    return None


print(modp(3, 5))