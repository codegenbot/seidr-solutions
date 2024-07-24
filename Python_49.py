def modp(n: int, p: int):
    return pow(n, p - 1, p) * n * pow(2, (p.bit_length() - 1).bit_length(), p) % p