```
def modp(n: int, p: int):
    if pow(n, 1, p) != 1:
        return None
    else:
        return pow(n, -1, p) * n % p