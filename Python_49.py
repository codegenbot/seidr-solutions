```
def modp(n: int, p: int):
    if p == 1:
        return 0
    if pow(n, p - 1, p) != 1:
        return n % p
    return (n * pow(n, p - 2, p)) % p