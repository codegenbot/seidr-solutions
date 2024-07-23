```
def modp(n: int, p: int):
    if n == 0:
        return 0
    r, t = 1, 0
    newt = 1
    newr = n % p
    while newr != 0 and newr != 1:
        quotient = p // newr
        temp = newt
        newt = (temp - temp * quotient) % p
        temp = r
        r = (temp - temp * quotient) % p
        newr, temp = temp, newr
    return (r + p) % p if n < p else r