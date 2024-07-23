```
def modp(n: int, p: int):
    return ((n ** ((p - 1) // 2)) * n) % p