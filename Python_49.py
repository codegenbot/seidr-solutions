def modular_power(n: int, p: int):
    return pow(n, p - 1, p) % p