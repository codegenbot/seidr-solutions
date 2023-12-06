def gcd(a, b):
    from math import gcd, abs

    a = abs(a)
    b = abs(b)
    while b != 0:
        a, b = b, a % b
    return a