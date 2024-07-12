def modp(n: int, p: int):
    if n % p == 0:
        return n
    elif (n > 0) != (p > 0):  
        return min(n, p)
    else:
        return n % p