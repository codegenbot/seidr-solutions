def modp(n: int, p: int):
    return pow(n, 2 ** (p.bit_length() - 1), p)