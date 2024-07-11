def gcd(a, b):
    if b == 0:
        return a if a != 0 else 1
    while b:
        a, b = b, a % b
    return a if a != 0 else 1