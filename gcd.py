def gcd(a, b):
    if b == 0:
        return abs(a)
    return gcd(b, a % b)