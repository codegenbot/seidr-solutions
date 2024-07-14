```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a) if a != 1 else 1