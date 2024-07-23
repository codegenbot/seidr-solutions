```
def modp(n: int, p: int):
    if n == 0:
        return 0
    result = pow(n, p - 2, p)
    return (n * result) % p