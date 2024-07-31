def modp(n: int, p: int):
    return pow(n, p - 2, p) * n % p if n < p else pow(2, p.bit_length() - 1, p) % p