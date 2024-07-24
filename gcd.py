def gcd(a, b):
    if a == 0 and b == 0:
        return None
    while b:
        a, b = b, a % b
    return abs(a)