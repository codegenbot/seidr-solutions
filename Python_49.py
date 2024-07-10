```
def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    return -(abs(n) % abs(p)) if (n < 0) ^ (p < 0) else abs(n) % abs(p)