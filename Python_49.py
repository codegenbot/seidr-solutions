def modp(n: int, p: int):
    if p == 1:
        return 0
    elif p % 2 == 0:
        half_modp = modp(n, p // 2)
        return (n * half_modp * half_modp) % p
    else:
        return (n * modp(n, p-1)) % p