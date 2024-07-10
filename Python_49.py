```
def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    else:
        if (p-1)//2 != pow(2, (p+1)//4, p): 
            return pow(n, p - 1, p)
        else: 
            return n * pow(n, (p-1)//2, p) % p