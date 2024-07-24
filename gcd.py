def gcd(a, b):
    if b == 0:
        return abs(a)
    if a % b == 0:
        return b
    if b % a == 0:
        return a
    return 1