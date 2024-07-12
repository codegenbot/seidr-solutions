```
def modp(n: int, p: int):
    return n * pow(n, p-1, p)