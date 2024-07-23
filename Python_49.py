```
def modp(n: int, p: int):
    if p == 1:
        return 0
    if p % 2 == 0:
        result = pow(n, (p // 2) - 1, p)
        return (result * n * result) % p
    else:
        return pow(n, p - 2, p) * n % p