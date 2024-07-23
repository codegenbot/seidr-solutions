```
def gcd(a, b):
    while b:
        a, b = abs(b), abs(a) % abs(b)
    return abs(a)