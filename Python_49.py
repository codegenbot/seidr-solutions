```
def modp(n: int, p: int):
    if p == 1:
        return 0
    elif p % 2 == 0:
        half_pow = modp(n, p // 2) % p
        return (n * half_pow * half_pow) % p
    else:
        if p % 2 == 1: 
            return n 
        else: 
            return (n * modp(n, p // 2) ** 2) % p