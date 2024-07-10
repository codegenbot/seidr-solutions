```
def modp(n: int, p: int):
    if n < 0:
        n += p
    if n == 0:
        return 0
    result = pow(n, p - 2, p)
    return result if n % 2 == 1 else (result + p) % p