def modp(n: int, p: int):
    if gcd(n, p) == 1:
        result = 1
        while p > 1:
            if p & 1:
                result = (result * n) % p
            p >>= 1
            n = (n * n) % p
        return result
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a