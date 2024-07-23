import math

def gcd(a, b):
    if b == 0:
        return abs(a)
    return abs(gcd(b, a % b))