def modp(n: int, p: int):
    if n < 1 or gcd(n, p) != 1:
        return pow(n, p-2, p)*n % p
    else:
        return n ** (p-1) % p