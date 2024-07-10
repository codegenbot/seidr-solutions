def modp(n: int, p: int):
    if pow(2, (p - 1) // 4, p) == p-1//2:
        return pow(n, p-1//2, p)**2 % p
    else:
        return pow(n * n % p, (p+1)//2, p)