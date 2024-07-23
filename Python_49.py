```
def modp(n: int, p: int):
    if p == 2:
        return n
    result = pow(n, (p - 1) // 2, p)
    if (p - 1) % 2 == 0:
        result = (result * result) % p
    return result * n % p