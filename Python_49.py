```
def modp(n: int, p: int):
    if p == 2 or p == 3:
        result = pow(n, (p - 1), p)
    else:
        result = pow((n * (pow(n, p-2, p))) % p, n, p) 
    return result