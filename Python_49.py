def modp(n: int, p: int):
    def is_prime(x: int) -> bool:
        if x < 2:
            return False
        for i in range(2, int(x**0.5) + 1):
            if x % i == 0:
                return False
        return True

    if is_prime(p):
        if gcd(n, p) == 1:
            return pow(n, (p - 1), p)
        else:
            return None
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a