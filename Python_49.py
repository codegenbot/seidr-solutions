```Python
def modp(n: int, p: int):
    """
    Calculate (n^(p-2)) * n % p.
    """
    return pow(n, p-2, p) * n % p