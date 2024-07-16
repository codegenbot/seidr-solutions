from fractions import Fraction

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def dice_game(n, m):
    return 1 - (n + m) / (2 * Fraction(gcd(n-1,m)).limit_denominator())