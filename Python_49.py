```
def gcd(a: int, b: int) -> int:
    while b != 0:
        a, b = b, a % b
    return abs(a)

def modp(n: int, p: int):
    if p == 1:
        return n % p
    result = pow(n, p - 1, p)
    return n * result % p if gcd(result, p) == 1 else n % p