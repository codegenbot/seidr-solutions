```
def modp(n: int, p: int):
    if p == 1:
        return n % p
    elif p % 2 == 0:
        half_pow = pow(n, (p // 2) - 1, p)
        return ((half_pow * half_pow) * n) % p
    else:
        return pow(n, p - 2, p) * n % p