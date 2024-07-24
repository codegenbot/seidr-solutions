def gcd(a, b):
    while b:
        a, b = b, a % b
    if abs(a) == 1 or abs(b) == 1:
        return 1
    return abs(a) if a != 0 else abs(b)