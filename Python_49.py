```def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    elif (p-1)//2 != pow(2, (p+1)//4, p): 
        return pow(n, p - 1, p)**2 % p
    else: 
        return (pow(n, (p-1)//2, p))**2 % p```