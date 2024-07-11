```
def modp(n: int, p: int):
    if n < 0:
        return (p - (-n) % p) % p
    else:
        return n % p