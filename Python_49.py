def modp(n: int, p: int):
    if p == 2:
        return n % p
    result = pow(n, (p - 1) // 2, p)
    return result * n % p