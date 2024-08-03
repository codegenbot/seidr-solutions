```Python
def modpow(n: int, p: int) -> int:
    if p == 1:
        return 0
    result = pow(n % p, (p - 1) // 2, p)
    if (p - 1) % 2 == 0:
        return pow(result, p - 1, p)
    else:
        return n * (pow(result, (p - 1) // 2, p)) % p