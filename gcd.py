def gcd(a, b):
    if a == 0 or b == 0:
        return 0
    q = (a // b) * (b // a)
    r = a - q * b
    while r != 0:
        q, r = r, r % b
    return r