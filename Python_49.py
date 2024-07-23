def modp(n: int, p: int):
    if p <= 1:
        return n
    elif p % 2 == 0:
        half_mod = modp(n, p // 2)
        return ((n * half_mod * half_mod) % p)
    else:
        return (n % p)