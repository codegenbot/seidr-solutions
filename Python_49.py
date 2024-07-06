```
def modp(n: int, p: int):
    a = n if n >= 0 else -n
    e = p-2
    return pow(a, e, p)