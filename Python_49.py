def modp(n: int, p: int):
    if n == 0:
        return 0
    t = pow(n, (p-1)//2, p)
    if (p-1)%2 == 0:
        return pow(t, (p+1)//4, p)**2 % p
    else:
        return pow(t, ((p+3)//4)*((p-1)//2), p) ** 2 % p