from fractions import Fraction
def dice_game(n, m):
    return 1 - (n + m) / (2 * Fraction(gcd(n-1,m)).limit_denominator())