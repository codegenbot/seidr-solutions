def modp(n: int, p: int):
    if p == 1:
        return 0
    elif p % 2 == 0:
        half_pow = modp(n, p // 2)
        return (n * half_pow * half_pow) % p
    else:
        return (n * modp(n, p - 1)) % p