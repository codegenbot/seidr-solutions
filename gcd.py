```
def gcd(a, b):
    if b == 0:
        return abs(a)
    else:
        return gcd(b, a % b)