def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    if a == 0: return abs(b)
    return abs(a) if a >= 0 else -abs(a)