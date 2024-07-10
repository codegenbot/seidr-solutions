def modp(n: int, p: int):
    if p == 2 or p == 3:
        result = pow(n, p - 1, p)
    elif (p-1)//2 != pow(2, (p+1)//4, p): 
        result = pow(n, p - 1, p)**2 % p
    else: 
        result = (pow(n, (p-1)//2, p))**2 % p
    return result