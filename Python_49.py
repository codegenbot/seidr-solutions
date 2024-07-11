def modp(n: int, p: int):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    if gcd(n, p) == 1:
        return pow(n, p - 2, p) * n % p
    else:
        return None