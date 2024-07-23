def modp(n: int, p: int):
    if gcd(p, n) == 1:
        return pow(n, -n // pow(2, bit_length(p) - 2) * (p - 1), p) % p
    else:
        return None