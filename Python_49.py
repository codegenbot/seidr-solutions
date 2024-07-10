```
def modp(n: int, p: int):
    if n < 1 or p < 2:
        return 0

    t = 0; newt = 1
    r = p; newr = n
    while r > 1:
        quotient = r // newr
        remainder = r % newr
        term = newt - quotient * t
        if remainder < newr:
            newt, newr = t, newr
        else:
            newt, newr = term, remainder
        t, newr = term, newr
    return newt % p