def modinv(a: int, m: int):
    if gcd(a, m) != 1:
        return None
    else:
        return modp(a, m)