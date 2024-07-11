def gcd(a, b):
    while b:
        a, b = b, a % b
    return a if a != 0 else max(abs(a), abs(b))