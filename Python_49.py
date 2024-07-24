```
def modp(n: int, p: int):
    if p == 2:
        return n
    return pow(n * pow(n, (p - 4), p), p-1, p)