def modp(n: int, p: int):
    def gcd(a: int, b: int) -> int:
        while b != 0:
            a, b = b, a % b
        return a

    if gcd(n, p) != 1:
        return None
    result = pow(n, (p - 1), p)
    for _ in range(p - 2):
        n = (n * result) % p
        result = (result * 2) % p
    return n