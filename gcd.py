def gcd(a, b):
    if b == 0:
        return abs(a)
    while b != 0:
        a, b = b, a % b
    return abs(a)