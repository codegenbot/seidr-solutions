import math

def gcd(a, b):
    if a == 0:
        return b
    if b == 0:
        return a
    return math.gcd(a, b)