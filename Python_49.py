```
def modp(p: int = None, n: int = None):
    if p and n:
        return pow(n, p, p)