def gcd(a, b):
    if b == 0:
        return a
    while b:
        a, b = b, a % b
    return a