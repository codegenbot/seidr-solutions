def modp(n: int, p: int):
    return (1 << ((p - 2).bit_length())) % p * n % p if n and p else 0