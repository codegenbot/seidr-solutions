def modp(n: int, p: int):
    if n == 0:
        return 0
    r, t = 1, 0
    newt = 1
    newr = n % p
    oldr = p
    while newr != 0:
        quotient = oldr // newr
        t, newt = newt, t - quotient * newt
        oldr, newr = newr, oldr - quotient * newr
    if (n - 1) % p == 0:
        return 0
    result = pow(n, t, p)
    if result == n - 1:
        return 0
    return result