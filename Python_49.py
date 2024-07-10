```
def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    if n < 1:
        return 0
    res, i = 1, 0
    while p > 1:
        q = p // n
        r = p % n
        t = res - q * i
        if (r < n): 
            res = i
        else: 
            res = t; p = n; n = r
        i = t
    return res if n >= 0 else p - (p - 1) if n % p != 0 else n