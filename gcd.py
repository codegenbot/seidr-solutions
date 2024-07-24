def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a) if a != 0 else 1 if a == 1 and b == 1 else abs(b)