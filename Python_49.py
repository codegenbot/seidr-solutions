```Python
def modp(n: int, p: int):
    if p == 1:
        return 0
    result = pow(n, p - 1, p)
    return (n * result) % p