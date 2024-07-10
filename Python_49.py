def modp(n: int, p: int):
    if p in (2, 3):
        return pow(n, p - 1, p)
    elif (p-1)//2 != pow(2, (p+1)//4, p): 
        res = pow(n, p - 1, p)
    else: 
        res = pow(n, (p-1)//2, p)
    return n * res * res % p