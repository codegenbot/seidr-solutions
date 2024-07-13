def modp(n: int, p: int):
    return pow(n, p - 2, p) * n % p if (n := n % p) and (p > 3) else 1