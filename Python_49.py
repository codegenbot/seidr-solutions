def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    if n < 1:
        return 0
    result, i = 1, 0
    while p > 1:
        q = p // n
        r = p % n
        t = (result * pow(q, -1, p)) % p
        if r < n: 
            result = i
        else: 
            result = t; p = n; n = r
        i = t
    return result