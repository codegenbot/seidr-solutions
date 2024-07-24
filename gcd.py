def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a) if a != 0 else abs(b)