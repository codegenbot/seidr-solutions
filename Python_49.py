```
def modp(n: int, p: int):
    return pow(abs(n), 1, p) if n != 0 else 1