def gcd(a, b):
    while b:
        a, b = b, abs(a % b)
    return abs(a)