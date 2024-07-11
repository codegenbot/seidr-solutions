```Python
def modp(n: int, p: int):
    if p == 1:
        return 0
    elif p % 2 == 0:
        half_pow = modp(abs(n), p // 2)
        return (abs(n) * half_pow * half_pow) % p
    else:
        return (abs(n) * modp(abs(n), p - 1)) % p