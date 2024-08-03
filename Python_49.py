```Python
def modp(n: int, p: int):
    if n < 1 or p < 2:
        return None
    if n >= p:
        return 1
    return pow(n, p - 2, p) * n % p