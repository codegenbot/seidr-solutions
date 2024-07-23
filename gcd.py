import math

def gcd(a, b):
    a = abs(a)
    b = abs(b)
    if b == 0:
        return a
    return gcd(b, a % b)