import math

def gcd(a, b):
    return abs(gcd(b, a % b)) if a != 0 else abs(b)